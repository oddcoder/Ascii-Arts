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
unsigned int d_n;
int (*allowed)(int);
int (*index)(int);
int (*init)(void);
char ***d;
};
#define font_alloc(font,column,nofdesigns)				\
	font.d_n = nofdesigns; 						\
	font.c = column;						\
	font.r = malloc(sizeof(int)*font.d_n);				\
        font.d = malloc(sizeof(char***)*font.d_n);			\
	for(int i=0;i<font.d_n;i++)					\
                font.d[i] =malloc(sizeof(char**)*font.c)
#define ARRAY(...) __VA_ARGS__
#define d_alloc(font,_char,row,design)					\
	font.r[font.index(_char)] = row;				\
	for(int j=0;j<font.c;j++)					\
		font.d[font.index(_char)][j] = 				\
		malloc(sizeof(char*)*font.r[font.index(_char)]);	\
	char *temp[] = design;						\
	for(int i=0;i<whimsy.c;i++)					\
		strcpy(whimsy.d[0][i],temp[i])

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
