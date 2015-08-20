#ifndef _whimsy_font_
#define _whimsy_font_
#include "core.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
int whimsy_allowed(int c)
{
return islower(c) || c == ' ';
}
int whimsy_index (int c){
return  islower(c)? c -'a'+1 :0;
}
int whimsy_init(void);
struct font whimsy = {
	.allowed = whimsy_allowed,
	.index = whimsy_index,
	.init = whimsy_init
};
int whimsy_init(void){
	//data allocation
	font_alloc(whimsy,10,27);
	d_alloc(whimsy,' ',5,ARRAY({"    ","    ","    ","    ","    ",	\
				  "    ","    ","    ","    ","    ",}));
	return 0;
}
#endif
