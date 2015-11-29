
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
import entities.*;

import luxe.importers.tiled.TiledMap;
import luxe.importers.tiled.TiledObjectGroup;
import luxe.tilemaps.Tilemap;
import phoenix.Texture.FilterType;

typedef MobileControls = { 
    @:optional var touchLeft:Bool;
    @:optional var touchRight:Bool;
    @:optional var touchLeftID:Int;
    @:optional var touchRightID:Int;

}


class Main extends luxe.Game {

    public static var states:States;
    public static var models:Entity;
    public static var level_model:LevelModel;
    public var inputDone:Bool = false;

    public var playerX:Int = 2;

    public var timerRunning:Bool = false;
    public var time:Float = 0;

    public var levelProgress = 0;

    public var mobileInput:MobileControls;

    //The level tiles
    var map: TiledMap;
    var map_scale: Float = 1;

    var avatar:Avatar;



    override function config(config:luxe.AppConfig) {

        //if you have errors about the window being created,
        //lower this to 2, or 0. it can also be 8
        config.render.antialiasing = 4;

        //load textures and texts
        config.preload.textures.push({id:'assets/mapSprites.png'});
        config.preload.textures.push({id:'assets/mapSpritesNew.png'});
        config.preload.textures.push({id:'assets/frog.png'});
        config.preload.texts.push({id:'assets/level1.tmx'});
        config.preload.texts.push({id:'assets/level2.tmx'});
        

        return config;

    } //config

    override function ready() {

        Luxe.renderer.clear_color.rgb(0x0a195c);

        setup_input();
        setup_mobile_input();
        setup_events();
        setup_debug_helpers();


        models = new Entity();
        level_model = new LevelModel({name:"level-model"});
        models.add(level_model);


        create_map();
        level_model.loadModelFromMap(map);
        
        playerX = level_model.getStartPosition();
        trace("player Start Position: "+ playerX);

        
        //playerX * map.tile_width
        avatar = new Avatar({name:"player",scale: new Vector(map_scale,map_scale),pos:new Vector((playerX+0.5)*64*map_scale,Luxe.screen.height - 32)});


    } //ready

    function setup_debug_helpers(){
        
        //listen to all events fired, and print the event name and any extra details.
        Luxe.events.listen( '*', function(e) {
            if(e._event_name_ != "game.redraw")
                trace("E: "+e._event_name_+ " | " +haxe.Json.stringify(e));
        });
    }


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



    function setup_mobile_input() {

        mobileInput = {touchLeft:false,touchRight:false, touchLeftID: -1, touchRightID: -1 };
    }

    function setup_input() {
        Luxe.input.bind_key('left', Key.key_a);
        Luxe.input.bind_key('left', Key.left);

        Luxe.input.bind_key('right', Key.key_d);
        Luxe.input.bind_key('right', Key.right);

    }

    function create_map() {

            //Fetch the loaded tmx data from the assets
        var map_data = Luxe.resources.text('assets/level2.tmx').asset.text;

            //parse that data into a usable TiledMap instance
        map = new TiledMap({ format:'tmx', tiled_file_data: map_data });

        map_scale = 380 / map.total_width;

        map.pos.y -= map.total_height*map_scale - 640;

        //Create the tilemap visuals
        map.display({ scale:map_scale, filter:FilterType.nearest });

        for(_group in map.tiledmap_data.object_groups) {
            for(_object in _group.objects) {

                switch(_object.type) {

                    case 'spawn': {

                        //The spawn position is set from the map
                        var spawn_pos = new Vector(_object.pos.x, _object.pos.y);

                    } //spawn

                    case 'exit': {


                    } //exit
                } //switch type
            } //each object
        } //each object group

        for(layer in map.tiledmap_data.image_layers) {

        } //each image_layer


        


    } //create_map


    function finish_game(won:Bool){
        timerRunning = false;

        var final_time = Math.floor(time * 100)/100;

        var final_string = (won)? "You Won! time: "+ final_time : "You Lost! time: "+final_time;
        trace(final_string);

    }

    override function ontouchdown( event:TouchEvent ) {
        if(event.x < 190){
            mobileInput.touchLeft = true;
            mobileInput.touchLeftID = event.touch_id;
        } else {
            mobileInput.touchRight = true;
            mobileInput.touchRightID = event.touch_id;

        }

    }
        /** Called for you when a touch is released, use the `touch_id` to track which */
    override function ontouchup( event:TouchEvent ) {
        if(event.touch_id == mobileInput.touchLeftID){
            mobileInput.touchLeft = false;
        }else if(event.touch_id == mobileInput.touchLeftID){
            mobileInput.touchRight = false;
        }

    }
        /** Called for you when a touch is moved, use the `touch_id` to track which */
    override function ontouchmove( event:TouchEvent ) {


    }


    override function onkeyup( e:KeyEvent ) {


        if(e.keycode == Key.escape) {
            Luxe.shutdown();
        } else if(e.keycode == Key.key_r){
           // Luxe.
        }

    } //onkeyup

    override function onmousemove( event:MouseEvent ) {
       // avatar.pos = event.pos;
    } //onmousemove

    override function update(dt:Float) {
        super.update(dt);

        update_input(dt);

        if(timerRunning){
            time += dt;
        }
    	
    } //update


    function update_input(dt:Float) {

        if(!timerRunning && (Luxe.input.inputdown('left') || Luxe.input.inputdown('right'))){
            timerRunning = true;
        }

        if(((Luxe.input.inputdown('left') && Luxe.input.inputdown('right')) || (mobileInput.touchLeft==true && mobileInput.touchRight==true)) && (!inputDone)){
            Luxe.events.fire("game.input.jump");
            inputDone = true;
            step(0,2);
        }
        
        if(Luxe.input.inputreleased('left') && !inputDone) {
            Luxe.events.fire("game.input.left");
            inputDone = true;
            step(-1,1);
        } 

        if(Luxe.input.inputreleased('right') && !inputDone) {
            Luxe.events.fire("game.input.right");
            inputDone = true;
            step(1,1);
        }


        if(inputDone && !Luxe.input.inputdown('left')&& !Luxe.input.inputdown('right')){
            inputDone = false;
        }
    }

    function step(x:Int = 0,y:Int = 1){


        //lets just not allw the player to go off the sides .. shall wrap around eventually.
        if(playerX== 0 && x < 0){
            //already far left
            return;
        } else if(playerX==map.width-1 && x > 0){
            //already far right
            return;
        }

        //update model
        playerX = playerX + x;
        level_model.step(y,(playerX));

       // level_model.updateDisplay(map);

        levelProgress += y;

        //update visual
        //map.pos.y = 0 - map.total_height*map_scale - 640 +(levelProgress*map.tile_height*map_scale);
        //map.pos.y += map.tile_height*map_scale;
        avatar.pos.y -= map.tile_height*map_scale * y;

        avatar.pos.x = ((playerX)+0.5)*64*map_scale;

        //move the camera
        Luxe.camera.pos.y -= map.tile_height*map_scale * y;

        
    }


} //Main
