#ifndef _ascii_arts_core_
#define _ascii_arts_core_
#include <stdio.h>
/*
r rows
c columns
*/
struct _char{
unsigned int r;
unsigned int c;
char **design;
};
/*
c_max maximum column length in the font characters
char_n number of characters
*/
struct font{
unsigned int c_max;
const int char_n;
struct _char *char_list;
int (*allowed)(int);
int (*index)(int);
int (*init)(void);
};
#define P99_PROTECT(...) __VA_ARGS__
#define _char_init(name,col,row,design) {				\
	name = (struct _char){.r=row,.c=col};				\
	name.design = (char**)malloc(c*sizeof(char*));			\
	int i;								\
	for(i=0;i<c;i++)						\
		name.design[i] = (char*)malloc(r*sizeof(char));		\
}
#define char_list_init(font) font.char_list =				\
			(struct _char*)malloc(font.c_max*sizeof(struct _char))
#define set_fchar(font,n,c,r,design)					\
		 _char_init(font.char_list[n],c,r,P99_PROTECT(design))
#define set_c_max(font) for(int i =0,font.c_max = 0;i<font.char_n;i++)	\
				if(font.char_list[i].c>font.c_max)	\
					font.c_max = font.char_list[i].c
#define fill_space(charcater) for(int i=0;i<character.row;i++) putchar(' ')
#define char_index(font, character) font.char_list[font.index(character)]
int printnarts(char* text, int n, struct font* style)
{
	int i,j;
	for(i=0;i<n;i++) if(!style->allowed(text[i]))
		return -1;
	for (i=0;i<style->c_max;i++)
		for(j=0;j<n;j++)
			fputs(style->char_list[style->index(text[j])].design[i],stdout);
	return 0;
}
#endif
