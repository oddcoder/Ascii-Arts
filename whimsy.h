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
	.d_n = 27, // a-z + space
	.allowed = whimsy_allowed,
	.index = whimsy_index,
	.init = whimsy_init
};
int whimsy_init(void){
	//data allocation
	whimsy.r = malloc(sizeof(int)*whimsy.d_n);
	whimsy.d = malloc(sizeof(char***)*whimsy.d_n);
	whimsy.c = 10;
	whimsy.r[0] = 4;
	for(int i=1;i<27;i++) whimsy.r[i] =1;
	for(int i=0;i<whimsy.d_n;i++)
		whimsy.d[i] =malloc(sizeof(char**)*whimsy.c);
	for(int i=0;i<whimsy.d_n;i++)
		for(int j=0;j<whimsy.c;j++)
			whimsy.d[i][j] = malloc(sizeof(char*)*whimsy.r[i]);
	char *a[] ={"    ","    ","    ","    ","    ","    ",
		    "    ","    ","    ","    "};
	for(int i=0;i<whimsy.c;i++)
		strcpy(whimsy.d[0][i],a[i]);
	return 0;
}
#endif
