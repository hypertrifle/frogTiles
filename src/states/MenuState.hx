package states;

import luxe.States;
import luxe.Entity;
import luxe.Color;
import luxe.options.StateOptions;

//mint stuff 
import mint.Control;
import mint.types.Types;
import mint.render.luxe.LuxeMintRender;
import mint.render.luxe.Convert;
import mint.layout.margins.Margins;
import mint.focus.Focus;

import phoenix.Batcher;
import phoenix.Camera;


class MenuState extends State {

	@:isVar public var menu_batcher(default, null):Batcher;
	public var menu_camera:Camera;

	//public static var disp : Text;
	public var canvas: mint.Canvas;
	public var rendering: LuxeMintRender;
	public var layout: Margins;
	public var focus: Focus;



  override public function new(options:StateOptions){
  	

  	trace("init menustate");
  	//create a hud camera
  	menu_camera = new Camera({
  	    camera_name: 'menu_camera',
  	});


  	for(b in Luxe.renderer.batchers){
  	    if(b.name == 'menu_batcher'){
  	        trace('found menu_batcher');
  	        menu_batcher = b;
  	    }
  	}
  	if(menu_batcher == null){
  	    trace('couldnt find menu_batcher' );
  	    menu_batcher = Luxe.renderer.create_batcher({
  	        name : 'menu_batcher',
  	        layer : 5,
  	        no_add : false,
  	        camera: menu_camera,
  	    });
  	}

  	//create a renderer with are cameras batcher.
  	rendering = new LuxeMintRender({batcher:menu_batcher});
  	
  	layout = new Margins();

  	canvas = new mint.Canvas({
  	    name:'canvas',
  	    rendering: rendering,
  	    
  	    options: { color:new Color(1,1,1,0.0) },
  	    x: 0, y:0, w: Luxe.screen.w, h: Luxe.screen.h
  	});

  	focus = new Focus(canvas);

  	super(options);

  }//init

  override function update(dt:Float){
  	canvas.update(dt);
  }//update

  override function onrender() {
      canvas.render();
  }


  override function onenter<T>(_:T) {
  	//when this state is loaded
  	trace("loading menustate");

  	new mint.Button({
  	    parent: canvas,
  	    name: 'level1',
  	    x: 76, y: 52, w: 32, h: 32,
  	    text: 'O',
  	    options: { color_hover: new Color().rgb(0xf6007b) },
  	    text_size: 16,
  	    onclick: function(e,c) {trace('mint button! ${Luxe.time}' );}
  	});

  	//lets add some stuff
 }

 override function onmousemove(e) {

     canvas.mousemove( Convert.mouse_event(e) );

 } //onmousemove

 override function onmouseup(e) {
     canvas.mouseup( Convert.mouse_event(e) );
 }

 override function onmousedown(e) {
     canvas.mousedown( Convert.mouse_event(e) );
 }

 override function onleave<T>(_:T) {
 	//when we leave this state

 	//lets clear our canvas
 	canvas.destroy_children();

 }


}//MenuState
