#ifndef _StarStrips_font_
#define _StarStrips_font_
#include <core.h>
int StarStrips_allowed(int c);
int StarStrips_index (int c);
int StarStrips_init(void);
int StarStrips_exit(void);
int StarStrips_print(const char* s);
struct font StarStrips = {
	.allowed = StarStrips_allowed,
	.index = StarStrips_index,
	.init = StarStrips_init,
	.exit = StarStrips_exit,
	.print = StarStrips_print
};
#endif
