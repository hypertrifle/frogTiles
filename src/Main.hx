
import luxe.Input;
import luxe.Parcel;
import luxe.Text;
import luxe.ParcelProgress;
import luxe.States;
import luxe.Entity;
import luxe.Quaternion;
import luxe.Vector;
import luxe.utils.Maths;
import luxe.Color;

import components.*;


class Main extends luxe.Game {

    public static var states:States;
    public static var levelModel:Entity;
    public static var levelGen:LevelModel;
    public var inputDone:Bool = false;

    public var playerX:Int = 2;

    public var timerRunning:Bool = false;
    public var time:Float = 0;

    override function config(config:luxe.AppConfig) {

            //if you have errors about the window being created,
            //lower this to 2, or 0. it can also be 8
        config.render.antialiasing = 4;

        config.preload.textures.push({id:'assets/mapSprites.png'});

//        config.preload.texts.push({id:'assets/tilemap.tmx'});
        

        return config;

    } //config

    override function ready() {

        setup_input();
        setup_events();


        levelModel = new Entity();
        levelGen = new LevelModel({name:"level-model"});
        levelModel.add(levelGen);

        playerX = levelGen.getStartPosition();
        trace("player Start Position: "+ playerX);

    } //ready


    function setup_events() {
        Luxe.events.listen( 'game.fail.*', function(e) {
            trace("fail game");
            finish_game(false);
            });
        Luxe.events.listen( 'game.success.*', function(e) {
            trace("win game");
            finish_game(true);
            });
    }



    function setup_input() {
        Luxe.input.bind_key('left', Key.key_a);
        Luxe.input.bind_key('left', Key.left);

        Luxe.input.bind_key('right', Key.key_d);
        Luxe.input.bind_key('right', Key.right);

    }

    function finish_game(won:Bool){
        timerRunning = false;

        var final_time = Math.floor(time * 100)/100;

        var final_string = (won)? "You Won! time: "+ final_time : "You Lost! time: "+final_time;
        trace(final_string);

    }

    override function onkeyup( e:KeyEvent ) {


        if(e.keycode == Key.escape) {
            Luxe.shutdown();
        }

    } //onkeyup

    override function update(dt:Float) {

        update_input(dt);

        if(timerRunning){
            time += dt;
        }
    	
    } //update


    function update_input(dt:Float) {

        if(!timerRunning && (Luxe.input.inputdown('left') || Luxe.input.inputdown('right'))){
            timerRunning = true;
        }

        if(Luxe.input.inputdown('left') && Luxe.input.inputdown('right') && !inputDone){
            trace("Jump Clicked");
            inputDone = true;
            step(-1,1);
        }
        
        if(Luxe.input.inputreleased('left') && !inputDone) {
            trace("left clicked");
            inputDone = true;
            step(1,1);
        } 

        if(Luxe.input.inputreleased('right') && !inputDone) {
            trace("right clicked");
            inputDone = true;
            step(0,2);
        }


        if(inputDone && !Luxe.input.inputdown('left')&& !Luxe.input.inputdown('right')){
            inputDone = false;
        }
    }

    function step(x:Int = 0,y:Int = 1){
        playerX = playerX + x;
        levelGen.step(y,playerX);
    }


} //Main
