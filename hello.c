#include <stdio.h>
#include "core.h"
#include "whimsy.h"
int main()
{
	whimsy.init();
	whimsy.c_max = whimsy.char_list[0].c;
	printarts("  ",3,&whimsy);
	return 0;
}
