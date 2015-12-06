package states;

import luxe.States;
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

import luxe.tween.Actuate;

typedef MobileControls = { 
    @:optional var touchLeft:Bool;
    @:optional var touchRight:Bool;
    @:optional var touchLeftID:Int;
    @:optional var touchRightID:Int;

}


class Mode1 extends State {

	public static var map:Entity;
  public static var level_model:LevelModel;
	public static var map_view:MapView;

  public static var step_time:Float  = 0.2;
	public var inputDone:Bool = false;

	public var hud:HUD;

	public var playerX:Int = 2;

	public var timerRunning:Bool = false;
	public var time:Float = 0;

	public var mobileInput:MobileControls;

	//The level tiles
	var map_tiled: TiledMap;
	var map_scale: Float = 1;

	var avatar:Avatar;


  override function init(){


  }//init

  override function onenter<T>(_:T) {
  	hud = new HUD();
  	Luxe.events.fire("game.state.enterMode1",{});
  	Luxe.camera.pos.y = 0;

  	setup_input();
  	setup_mobile_input();
  	setup_events();

    //lets create our map,
  	map = new Entity();

    // add our level model and our custom map view
    level_model = new LevelModel({name:"level-model"});
  	map_view = new MapView({name:"map-view"});

    //add them to the entity
    map.add(level_model);
  	map.add(map_view);

    //create tmx map
  	create_map();

    //load it into our custom model
  	level_model.loadModelFromMap(map_tiled);

    //get he player starting position.
  	playerX = level_model.getStartPosition();
  	
  	//load our Protaganist.
  	avatar = new Avatar({name:"player",scale: new Vector(map_scale,map_scale),pos:new Vector((playerX)*64*map_scale,Luxe.screen.height - 64)});




  }

  override function onleave<T>(_:T) {
  	Luxe.events.fire("game.state.leavemode1",{});

  	//destroy stuffs
  	avatar.destroy();
  	map.destroy();
  	map_tiled.destroy();
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
      trace(1);
      //Fetch the loaded tmx data from the assets
      var map_data = Luxe.resources.text('assets/level1.tmx').asset.text;
      
      trace(2);
      
      //parse that data into a usable TiledMap instance
      map_tiled = new TiledMap({ format:'tmx', tiled_file_data: map_data });
      trace(3);
      
      map_scale = Main.GAME_WIDTH / map_tiled.total_width;
      trace(4);
      
      map_tiled.pos.y -= map_tiled.total_height*map_scale - Main.GAME_HEIGHT;
      trace(5);

  } //create_map


  function finish_game(won:Bool){
      timerRunning = false;

      var final_time = Math.floor(time * 100)/100;

      var final_string = (won)? "You Won! time: "+ final_time : "You Lost! time: "+final_time;
      trace(final_string);

  }

  override function ontouchdown( event:TouchEvent ) {
      if(event.x < Main.GAME_WIDTH/2){
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



  override function onmousemove( event:MouseEvent ) {
     // avatar.pos = event.pos;
  } //onmousemove


  override function update(dt:Float){
  	super.update(dt);

  	update_input(dt);

  	if(timerRunning){
  	    time += dt;
  	}
  }//update

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
      } else if(playerX==map_tiled.width-1 && x > 0){
          //already far right
          return;
      }

      //update model
      playerX = playerX + x;
      level_model.step(y,(playerX));

      //move the avatar
      Actuate.tween( avatar.pos, Mode1.step_time, { x: playerX*64*map_scale, y:avatar.pos.y- map_tiled.tile_height*map_scale * y } ).ease( luxe.tween.easing.Quad.easeOut );

      //move the camera
      Actuate.tween( Luxe.camera.pos, Mode1.step_time, {y:Luxe.camera.pos.y - map_tiled.tile_height*map_scale * y } ).ease( luxe.tween.easing.Quad.easeOut );

      
  }

  	override function onrender() {

          hud.canvas.render();

      } //onrender


}//Mode1
