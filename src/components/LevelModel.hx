package components;

import luxe.Component;
import luxe.options.ComponentOptions;
import luxe.importers.tiled.TiledMap;


class LevelModel extends Component {

    var level:Array<Array<Int>>;
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

    public function getStartPosition() {
        return level[0].indexOf(6);
    }

    override function update(dt:Float) {
        //called every frame for you

    }

    public function loadModelFromMap(map:TiledMap){
        //save a reference so we can update tiles later
        levelDisplay = map;

        level = new Array<Array<Int>>();
        var start = false;
        for( layer in map ) {
            for( y in 0 ... map.height ) {

                var row:Array<Int> = new Array<Int>();
                for( x in 0 ... map.width ) {
                    var tile = layer.tiles[y][x];
                    row.push(tile.id);
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
            if(level[i].indexOf(id) != -1){
                //this row has a moving log sprite in it, lets shift the whole row right, wrapping around the world
                Luxe.events.fire("game.model.moving-row",{i:i,j: level[i].indexOf(id)});
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


                Luxe.events.fire("game.model.redraw-map:set-from-model",{i:i,j:j, x:j,y:i+currentProgress});

                var tile = levelDisplay.tile_at("visualfg",j,levelDisplay.height - i - currentProgress-1);
                tile.id = level[i][j];



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
            var prev:Array<Int> = level.shift();
            currentProgress ++;
        }

        update_map_logic(amount);


        if(safeTileIndexs.indexOf(level[0][playerX]) != -1){
            //we good
            safe = true;
        } else {
            //we bad
            safe = false;
        } 

        //check to see if out new player is on a safe tile
        Luxe.events.fire("player.landed.tile", {tileID: level[0][playerX], safe: safe, levelLeft: level.length});

        if(!safe){

            //bad tile
            Luxe.events.fire('game.fail.hitBadTile',{});
            return false;
        } else {

            //good tile.
            if(level[0][playerX] == exitBlockId){
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
