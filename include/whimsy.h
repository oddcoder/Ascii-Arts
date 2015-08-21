#ifndef _whimsy_font_
#define _whimsy_font_
#include <core.h>
int whimsy_allowed(int c);
int whimsy_index(int c);
int whimsy_init(void);
int whimsy_exit(void);
int whimsy_print(const char* s);
struct font whimsy = {
	.allowed = whimsy_allowed,
	.index = whimsy_index,
	.init = whimsy_init,
	.exit = whimsy_exit,
	.print = whimsy_print
};
#endif
