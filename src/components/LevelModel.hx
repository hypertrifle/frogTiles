package components;

import luxe.Component;
import luxe.options.ComponentOptions;
import luxe.importers.tiled.TiledMap;
import luxe.tilemaps.Tilemap;

typedef TileModel = {
    @:optional var id:Int;
    @:optional var visual:Tile;
}


class LevelModel extends Component {

    var level:Array<Array<TileModel>>;
    var levelDisplay:TiledMap;

    var safeTileIndexs:Array<Int>;
    var exitBlockId:Int = 5;

    var currentProgress:Int = 0;

	override public function new(options:ComponentOptions){
	
	    super(options);

        //hardcoded safe tile index
        safeTileIndexs = [2,3,4,5,6,7,8];

    } //new

    override function init() {
        //called when initialising the component




    }

    public function getStartPosition():Int {
        //return level[0].indexOf(6);

        for(i in 0 ... level[0].length){
            if(level[0][i].id == 6){
                return i;
            }
        }

        return -1;

    }

    override function update(dt:Float) {
        //called every frame for you

    }

    public function loadModelFromMap(map:TiledMap){
        //save a reference so we can update tiles later
        levelDisplay = map;

        level = new Array<Array<TileModel>>();
        var start = false;
        for( layer in map ) {
            for( y in 0 ... map.height ) {

                var row:Array<TileModel> = new Array<TileModel>();
                for( x in 0 ... map.width ) {
                    var tile = layer.tiles[y][x];
                    row.push({id: tile.id,visual:tile});
                    trace(tile.id);
                    if(tile.id == exitBlockId){
                        Luxe.events.fire("game.debug.endOfLevelFound",{x:x,y:y});
                        start = true;
                    }
                }
                if(start){
                    level.unshift(row); 
                }
            }
        }
    }

    function update_map_logic(itterations:Int = 1){
        for(i in 0 ... itterations){

            //move logs along
            move_row_containing_id(3,false);

            //move second logs along
            move_row_containing_id(4,true);
        }

        updateDisplay();
    }

    function move_row_containing_id(id:Int, moveRight:Bool){
        
        for(i in 0 ... level.length){
            var found = false;
            for(j in 0...level[i].length){
                if(level[i][j].id == id){
                    found = true;
                    break;
                }

            }

            if(found){
                //this row has a moving log sprite in it, lets shift the whole row right, wrapping around the world
                //Luxe.events.fire("game.model.moving-row",{i:i,j: level[i].indexOf(id)});
                if(moveRight){
                    level[i].unshift(level[i].pop());
                } else {
                    level[i].push(level[i].shift());
                }


            }
        }
    }



    function updateDisplay(){
        Luxe.events.fire("game.model.redraw-map-display",{});
        //here we need to copy our game model back into the tilemap
        for(i in 0 ... level.length){
            for(j in 0 ... levelDisplay.width){

                trace(level[i][j].visual);

                level[i][j].visual.pos.x = 40;
                //Luxe.events.fire("game.model.redraw-map:set-from-model",{i:i,j:j, x:j,y:i+currentProgress});

                //var tile = levelDisplay.tile_at("visualfg",j,levelDisplay.height - i - currentProgress-1);
                //tile.id = level[i][j].id;



                /*if(i == 1 && j ==2){
                    var tile = levelDisplay.tile_at("visualfg",j,i+currentProgress);
                    tile.id = 8;
                }*/
            }
        }


       

    }

    public function step(amount:Int = 1,playerX:Int = 2):Bool{




        var safe = false;

        if(amount >= level.length){
            // fire jumped off end of level envent
            Luxe.events.fire('game.fail.toofar',{amount:amount,level_length:level.length});
            //trace("cant jump that far!");
            return safe;

        }

        // on step we want to shift all items down the amount of rows the player has progressed;
        for (i in 0 ... amount) {
            var prev:Array<TileModel> = level.shift();
            currentProgress ++;
        }

        update_map_logic(amount);


        if(safeTileIndexs.indexOf(level[0][playerX].id) != -1){
            //we good
            safe = true;
        } else {
            //we bad
            safe = false;
        } 

        //check to see if out new player is on a safe tile
        Luxe.events.fire("player.landed.tile", {tileID: level[0][playerX].id, safe: safe, levelLeft: level.length});

        if(!safe){

            //bad tile
            Luxe.events.fire('game.fail.hitBadTile',{});
            return false;
        } else {

            //good tile.
            if(level[0][playerX].id == exitBlockId){
                Luxe.events.fire('game.success.hitExitTile',{});
            }
        }


        Luxe.events.fire("game.model.stepComplete",{row:level[0]});
        return safe;
    }

    override function onreset() {
        //called when the scene starts or restarts
    }

}
