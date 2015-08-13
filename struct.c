#include <stdio.h>
/*
r rows
c columns
*/
struct character{
const unsigned int r;
const unsigned int c;
const char design[columns][rows];
};
/*
c_max maximum column length in the font characters
char_n number of characters
*/
struct font{
unsigned int c_max = 0;
const int char_n;
const struct character char_list[char_n];
int (*allowed)(int);
int (*index)(int);
};
#define character_init(name,r,c,design) struct character name =		\
						{row,column,design}
#define set_column_max(font) for(int i =0;i<font.char_n;i++)		\
				if(font.char_list[i].c>font.c_max)	\
					font.c_max = font.char_list[i].c
#define fill_space(charcater) for(int i=0;i<character.row;i++) putchar(' ')
#define char_index(font, character) font.char_list[font.*index(character)
int printnarts(char* text, int n, struct font* style)
{
	int i;
	for(i=0;i<n;i++) if(!(style->(*allowed))(text[i]))
		return -1;
	for (i=0;i<style.c_max;i++){
		int j;
		for(j=0;j<n;j++){
			if(char_index(*style, text[j]).c<i){
				fillspace(font);
				continue;
			}
			fputs(char_index(*style, text[j]).design[i],stdout);
		}
	}
	return 0;
}
