package entities;

import options.*;

import luxe.Sprite;
import luxe.options.SpriteOptions;


class MapTile extends Sprite {

  public var uid:Int;
  public var tile_id:Int;

  public var wrap_sprite:Sprite;

  override public function new( options:RSTileOptions ) {

  	//default sprite options.
  	uid = options.uid;


  	//call sprite super
  	super(options);
  }


  override function init(){

  }//init

  override function update(dt:Float){

  }//update

}//MapTile
