package components;

import luxe.Component;
import luxe.options.ComponentOptions;


class LevelModel extends Component {

    var level:Array<Array<Int>>;

    var safeTileIndexs:Array<Int>;

	override public function new(options:ComponentOptions){
	
	    super(options);

        //currently just loading a hardcoded array.

        //level = new Array<Array<Int>>();
        level = [[0, 0, 9, 0, 0], [0, 0, 0, 0, 0], [0, 0, 2, 0, 0], [0, 0, 0, 0, 0], [0, 0, 0, 0, 2], [0, 2, 0, 0, 0], [0, 8, 2, 0, 2]];


        //hardcoded safe tile index
        safeTileIndexs = [0,8];

    } //new

    override function init() {
        //called when initialising the component




    }

    public function getStartPosition() {
        return level[0].indexOf(9);
    }

    override function update(dt:Float) {
        //called every frame for you

    }

    public function step(amount:Int = 1,playerX:Int = 2):Bool{

        var safe = false;

        if(amount >= level.length){
            // fire jumped off end of level envent
            Luxe.events.fire('game.fail.toofar',{});
            //trace("cant jump that far!");
            return safe;

        }

        // on step we want to shift all items down the amount of rows the player has progressed;
        for (i in 0 ... amount) {
            var prev:Array<Int> = level.shift();
        }

        //check to see if out new player is on a safe tile
        if(safeTileIndexs.indexOf(level[0][playerX]) != -1){
            //we good
            safe = true;
        } else {
            //we bad
            safe = false;
        }

        if(level.length <= 1){
            //trace("end of level?");
            if(safe){
                //fire level complete event
                Luxe.events.fire('game.success.complete',{});

            } else {
                //fire level failed event
                Luxe.events.fire('game.fail.hitBadTile',{});

            }
        }

        Luxe.events.fire("game.redraw",{});
        return safe;
    }

    override function onreset() {
        //called when the scene starts or restarts
    }

}
