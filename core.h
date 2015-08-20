#ifndef _ascii_arts_core_
#define _ascii_arts_core_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
int (*exit)(void);
int (*print)(const char*);
char ***d;
};
#define XX(a,b,c) a##b##c
#define font_alloc(font,column,nofdesigns)				\
	font.d_n = nofdesigns; 						\
	font.c = column;						\
	font.r = malloc(sizeof(int)*font.d_n);				\
        font.d = malloc(sizeof(char***)*font.d_n);			\
	for(int i=0;i<font.d_n;i++)					\
                font.d[i] =malloc(sizeof(char**)*font.c)
#define ARRAY(...) __VA_ARGS__
#define d_alloc(font,__tok,_char,row,design)				\
	font.r[font.index(_char)] = row;				\
	for(int j=0;j<font.c;j++)					\
		font.d[font.index(_char)][j] =				\
		malloc(sizeof(char*)*font.r[font.index(_char)]);	\
	char * XX(font,temp,__tok)[]  = design;				\
	for(int i=0;i<font.c;i++)					\
		strcpy(font.d[font.index(_char)][i],XX(font,temp,__tok)[i]);
#endif 
