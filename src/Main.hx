
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



class Main extends luxe.Game {

    public static var states:States;
    public static var debug_events_to_ignore:Array<String> = ["model","input","landed.tile"];

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

        setup_debug_helpers();

        setup_global_listeners();

       states = new States({name:'states'});
       states.add(new states.Mode1({name:"mode1"}));



    } //ready

    override function onkeyup( e:KeyEvent ) {


        if(e.keycode == Key.escape) {
            Luxe.shutdown();
        } else if(e.keycode == Key.key_r){

           
            Luxe.events.fire("game.states.switch",{newstate:"mode1"});
           

        }

    } //onkeyup

    function setup_global_listeners(){
        Luxe.events.listen("game.states.switch", function(e) {
                Main.states.set(e.newstate);

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

                trace("E: "+e._event_name_+ " | " +haxe.Json.stringify(e));
        });
    }


    override function update(dt:Float) {
        super.update(dt);
    	
    } //update



} //Main
