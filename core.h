#ifndef _ascii_arts_core_
#define _ascii_arts_core_
#include <stdio.h>
/*
r rows
c columns
d design
char_n number of characters
*/
struct font{
unsigned int c;
unsigned int *r;
const int d_n;
int (*allowed)(int);
int (*index)(int);
int (*init)(void);
char ***d;
};
int printnarts(char* text, int n, struct font* style)
{
	for(int i=0;i<n;i++)
		if(style->allowed(text[i]) != 1)
			return -1;
	for (int i=0;i<style->c;i++)
	{
		for(int j=0;j<n;j++)
			fputs(style->d[style->index(text[j])][i],stdout);
		putchar('\n');
	}
	return 0;
}
#endif
