package components;

import luxe.Component;
import entities.*;
import components.LevelModel;
import states.*;

import phoenix.Texture;
import luxe.Vector;
import luxe.components.sprite.SpriteAnimation;
import luxe.options.ComponentOptions;

import luxe.tween.Actuate;


class MapView extends Component {

	var tiles:Array<MapTile>;

	var map_scale:Float;
	var tileSize:Int = 64;

	var tile_texture:Texture;

	var yoffset:Int;

	override function new(options:ComponentOptions){


	        super(options);

	        tile_texture = Luxe.resources.texture('assets/mapSprites.png');
	        tiles = new Array<MapTile>();

	        Luxe.events.listen("game.level.built", mapInit);
	        Luxe.events.listen("game.level.updated", map_animate_tiles);

	    }

    override function init() {
        //called when initialising the component

       

       
    }

    public function map_animate_tiles(e){
    	var level:Array<Array<TileModel>> = e.level;
    	for(y in 0...level.length){
    		for(x in 0...level[0].length){
    			move_tile(x,y,level[y][x].uid);
    		}
    	}


    }

    function move_tile(xnew:Int,ynew:Int,uid:Int){

    	for(i in 0...tiles.length){
    		if(tiles[i].uid == uid){
    			Actuate.tween( tiles[i].pos, Mode1.step_time, { x: xnew*64*map_scale, y:(ynew*64*map_scale)-yoffset } ).ease( luxe.tween.easing.Quad.easeOut );
    			continue;
    		}
    	}
    }

    public function mapInit(e){
    	var level:Array<Array<TileModel>> = e.level;

    	


    	///repace for screensize;
    	map_scale = 380 / (level[0].length*tileSize);

    	//work out our starting position
    	yoffset = Math.floor((level.length*tileSize*map_scale) - (Luxe.screen.height));

    	//right lets create some fucking tiles

    	for(y in 0...level.length){
    		//our verticle rows, starting at the top up the stairs
    		for(x in 0...level[0].length){
    			//along the coridorrrrrr

    			//create the tile
    			if(level[y][x].id != 0){

    			tiles.push(makeTile(x,y,level[y][x]));


    			}

    		}



    	}

    }

   function makeTile(x:Int,y:Int,model:TileModel):MapTile{
   	
   		var sprite:MapTile = new MapTile( {uid: model.uid, centered:false, texture: tile_texture, pos: new Vector(x*64*map_scale,(y*64*map_scale)-yoffset),  size: new Vector( 64*map_scale, 64*map_scale )});
   		
   		var anim:SpriteAnimation = sprite.add( new SpriteAnimation({ name:'anim' }) );

   		var anim_object = Luxe.resources.json('assets/tiles.json');
   		anim.add_from_json_object( anim_object.asset.json );

   		anim.animation = '' + (model.id);
   		anim.play();

   		return sprite;
   }


    override function update(dt:Float) {
        //called every frame for you
    }

    override function onreset() {
        //called when the scene starts or restarts
    }

}
