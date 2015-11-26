#ifdef GL_ES
precision mediump float;
#endif

uniform sampler2D tex0;
uniform sampler2D mask;

varying vec2 tcoord;
varying vec4 color;

uniform float distortamount;

void main() {
	vec4    color   = texture2D(tex0, tcoord);
	color.a =  texture2D(mask, tcoord).b;

	gl_FragColor = color;

}

