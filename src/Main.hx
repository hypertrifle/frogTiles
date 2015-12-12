
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

//import snowhxt.Snowhxt;



class Main extends luxe.Game {

    public static var states:States;
    public static var debug_events_to_ignore:Array<String> = [];//["model","input","landed.tile"];

    public static var GAME_WIDTH:Int;
    public static var GAME_HEIGHT:Int;

    //var shxt : Snowhxt;

    override function config(config:luxe.AppConfig) {

        //if you have errors about the window being created,
        //lower this to 2, or 0. it can also be 8
        config.render.antialiasing = 4;

        //load textures and texts
        config.preload.textures.push({id:'assets/mapSprites.png'});
        config.preload.textures.push({id:'assets/frog.png'});
        config.preload.texts.push({id:'assets/level1.tmx'});
        config.preload.texts.push({id:'assets/level2.tmx'});
        config.preload.jsons.push({id:'assets/tiles.json'});
        config.preload.fonts.push({ id : 'assets/fontAwesome64.fnt' });
        

        return config;

    } //config

    override function ready() {
        //our link to hxscout
        //shxt = new Snowhxt();

        Main.GAME_HEIGHT = Luxe.screen.h;
        Main.GAME_WIDTH = Luxe.screen.w;

        Luxe.renderer.clear_color.rgb(0x0a195c);

        setup_debug_helpers();

        setup_global_listeners();

       states = new States({name:'states'});
       states.add(new states.Mode1({name:"mode1"}));
       states.add(new states.MenuState({name:"menu"}));

       //Luxe.events.fire("game.states.switch",{newstate:"menu"});


    } //ready

    override function onkeyup( e:KeyEvent ) {


        if(e.keycode == Key.escape) {
            Luxe.shutdown();
        } else if(e.keycode == Key.key_r){

           
            Luxe.events.fire("game.states.switch",{newstate:"mode1", params: {map:"level1.tmx"}});
           

        }

    } //onkeyup


    //required if we wish to use mouse functions deeper in the project
    override function onmousemove(e) {

    } //onmousemove

    override function onmouseup(e) {
    }

    override function onmousedown(e) {

    }


    function setup_global_listeners(){
        Luxe.events.listen("game.states.switch", function(e) {
            if(e.params){
                Main.states.set(e.newstate,e.params);
            } else {
                Main.states.set(e.newstate);

            }

            });
    }

    function setup_debug_helpers(){
        
        //listen to all events fired, and print the event name and any extra details.
        Luxe.events.listen( '*', function(e) {

                for(i in 0...debug_events_to_ignore.length){
                    if(e._event_name_.indexOf(debug_events_to_ignore[i]) != -1){
                        return;
                    }
                }

                try {
                        //trace("E: "+e._event_name_+ " | " +haxe.Json.stringify(e));
                    } catch(msg : String){

                    }
                
        });
    }


    override function update(dt:Float) {
        //shxt.update();
        super.update(dt);
    	
    } //update



} //Main
