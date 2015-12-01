package entities;

import luxe.Entity;
import luxe.Color;


//mint stuff 
import mint.Control;
import mint.types.Types;
import mint.render.luxe.LuxeMintRender;
import mint.render.luxe.Convert;
import mint.layout.margins.Margins;

import phoenix.Batcher;
import phoenix.Camera;


class HUD extends Entity {

	@:isVar public var hud_batcher(default, null):Batcher;
	public var hud_camera:Camera;

	//public static var disp : Text;
	public var canvas: mint.Canvas;
	public var rendering: LuxeMintRender;
	public var layout: Margins;



  override function init(){
  	//create a hud camera
  	hud_camera = new Camera({
  	    camera_name: 'hud_camera',
  	});


  	for(b in Luxe.renderer.batchers){
  	    if(b.name == 'hud_batcher'){
  	        trace('found hud_batcher');
  	        hud_batcher = b;
  	    }
  	}
  	if(hud_batcher == null){
  	    trace('couldnt find hud_batcher' );
  	    hud_batcher = Luxe.renderer.create_batcher({
  	        name : 'hud_batcher',
  	        layer : 5,
  	        no_add : false,
  	        camera: hud_camera,
  	    });
  	}

  	//create a renderer with are cameras batcher.
  	rendering = new LuxeMintRender({batcher:hud_batcher});
  	
  	layout = new Margins();

  	canvas = new mint.Canvas({
  	    name:'canvas',
  	    rendering: rendering,
  	    
  	    options: { color:new Color(1,1,1,0.0) },
  	    x: 0, y:0, w: Luxe.screen.w, h: Luxe.screen.h
  	});


  	new mint.Label({
  	            parent: canvas,
  	            name: 'labelmain',
  	            x:3, y:3, w:100, h:36,
  	            text: 'FrogPawn alpha1',
  	            align:left,
  	            text_size: 12,
  	            onclick: function(e,c) {trace('hello mint! ${Luxe.time}' );}
  	        });




  }//init

 	

     override function update(dt:Float) {

         canvas.update(dt);

     } //update

}//HUD
