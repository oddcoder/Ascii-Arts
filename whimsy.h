#ifndef _whimsy_font_
#define _whimsy_font_
#include "core.h"
#include <ctype.h>
#include <stdlib.h>
int whimsy_allowed(int c)
{
return islower(c) || c == ' ';
}
int whimsy_index (int c){
return  islower(c)? c -'a'+1 :0;
}
int whimsy_init(void);
struct font whimsy = {
	.char_n = 27, // a-z + space
	.allowed = whimsy_allowed,
	.index = whimsy_index,
	.init = whimsy_init
};
int whimsy_init(void){
	char_list_init(whimsy);
	set_fchar(whimsy,0,10,4,P99_PROTECT({"    ","    ","    ","    ",	\
				"    ","    ","    ","    ","    ","    "}));
}
#endif
