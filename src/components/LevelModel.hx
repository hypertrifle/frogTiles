package components;

import luxe.Component;
import luxe.options.ComponentOptions;
import luxe.importers.tiled.TiledMap;
import luxe.tilemaps.Tilemap;
import luxe.Sprite;
import luxe.Vector;

typedef TileModel = {
    @:optional var id:Int;
    @:optional var uid:Int;
}


class LevelModel extends Component {

    public var level:Array<Array<TileModel>>;
    var safeTileIndexs:Array<Int>;
    var exitBlockId:Int = 5;

    var currentProgress:Int = 0;


    var l:Int = 0; //last / length

	override public function new(options:ComponentOptions){
	
	    super(options);

        //hardcoded safe tile index
        safeTileIndexs = [2,3,4,5,6,7];

    } //new

    override function init() {
        //called when initialising the component




    }

    public function getStartPosition():Int {
        //return level[0].indexOf(6);
        l = level.length-1;
        for(i in 0 ... level[l].length){
            if(level[l][i].id == 6){
                return i;
            }
        }

        return -1;

    }

    override function update(dt:Float) {
        //called every frame for you

    }

    public function loadModelFromMap(map:TiledMap){

        level = new Array<Array<TileModel>>();
        var start = false;

        var i = 0;
        for( layer in map ) {
            for( y in 0 ... map.height ) {

                var row:Array<TileModel> = new Array<TileModel>();
                for( x in 0 ... map.width ) {
                   
                    var tileid = layer.tiles[y][x].id;
                    row.push({id: tileid,uid:i});      
                    i ++;

                    if(!start && tileid == exitBlockId){
                        Luxe.events.fire("game.debug.endOfLevelFound",{x:x,y:y});
                        start = true;
                    }
                }

                if(start){
                    level.push(row); 
                }
            }
        }

        Luxe.events.fire("game.level.built",{level:level, from:map});
    }

    function update_map_logic(itterations:Int = 1){
        for(i in 0 ... itterations){

            //move logs along
           move_row_containing_id(3,false);

            //move second logs along
           move_row_containing_id(4,true);

           //swap our swapping tiles
           alternate_tile_properties(7,8);
        }

        Luxe.events.fire("game.level.updated",{level:level, progress:currentProgress});
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
                if(moveRight){
                    level[i].unshift(level[i].pop());
                } else {
                    level[i].push(level[i].shift());
                }


            }
        }
    }

    function alternate_tile_properties(id1:Int, id2:Int){
        for(i in 0 ... level.length){
            var firstModel:TileModel = null; var firstIndex:Int = -1;
            var secondModel:TileModel = null; var secondIndex:Int = -1;
            for(j in 0...level[i].length){
                if(level[i][j].id == id1){
                    firstModel = level[i][j];
                } else if(level[i][j].id == id2){
                    secondModel = level[i][j];
                }
            }

            if(firstModel != null && secondModel != null){
                trace("found tiles to swap");
                //we have a row with our two tiles, lets swap them
                level[i][firstIndex] = secondModel;
                level[i][secondIndex] = firstModel;


            }
        }

    }


    public function step(amount:Int = 1,playerX:Int = 2):Bool{
        //assume unsafe to start.
        var safe = false;

        if(amount >= level.length){
            // fire jumped off end of level envent
            Luxe.events.fire('game.fail.toofar',{amount:amount,level_length:level.length});
            return safe;

        }

        // on step we want to shift all items down the amount of rows the player has progressed;
        for (i in 0 ... amount) {
            var prev:Array<TileModel> = level.pop();
            currentProgress ++;
        }

        //do we want to update map logic per tile traveled or per move made?
        update_map_logic(1);
        //update_map_logic(amount);

        //get the current last row of model and check to see if player is on a safe tile.
        l = level.length-1;
        if(safeTileIndexs.indexOf(level[l][playerX].id) != -1){
            //we good
            safe = true;
        } else {
            //we bad
            safe = false;
        } 

        //fire player landed event
        Luxe.events.fire("player.landed.tile", {tileID: level[l][playerX].id, safe: safe, levelLeft: level.length});

        if(!safe){
            //bad tile
            Luxe.events.fire('game.fail.hitBadTile');
            return false;
        } else {
            //good tile.

            //is it the end tile?
            if(level[0][playerX].id == exitBlockId){
                Luxe.events.fire('game.success.hitExitTile');
            }
        }

        // else just continue
        Luxe.events.fire("game.model.stepComplete",{row:level[0]});
        return safe;
    }

    override function onreset() {
        //called when the scene starts or restarts
    }

}
