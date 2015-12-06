package options;

import luxe.Rectangle;
import luxe.options.SpriteOptions;

typedef RSTileOptions = {

  > SpriteOptions,

    /** our models UID for this sprite */
    @:optional var uid : Int;

} //SpriteOptions
