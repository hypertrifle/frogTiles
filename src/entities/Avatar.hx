package entities;

import luxe.Entity;
import luxe.Sprite;
import luxe.Vector;

class Avatar extends Entity {

  var display : Sprite;

  override function init(){

  	var image = Luxe.resources.texture('assets/frog.png');
  	display = new Sprite( {centered: false, texture:image,pos: new Vector( 0,0 ),depth : 4});
  	Luxe.events.fire("debug.avatar.init");


  }//init

  override function update(dt:Float){
  	super.update(dt);
  	display.pos = pos;

  }//update

  override function ondestroy(){
    display.destroy();
  }

}//Avatar
