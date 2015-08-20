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
int whimsy_exit(void);
int whimsy_print(const char* s);
struct font whimsy = {
	.allowed = whimsy_allowed,
	.index = whimsy_index,
	.init = whimsy_init,
	.exit = whimsy_exit,
	.print = whimsy_print
};
int whimsy_init(void){
	//data allocation
	font_alloc(whimsy,10,27);
	d_alloc(whimsy,space,' ',5,ARRAY({
			"    ",
			"    ",
			"    ",
			"    ",
			"    ",
			"    ",
			"    ",
			"    ",
			"    ",
			"    "			}));
	d_alloc(whimsy,a,'a',11,ARRAY({
			"          ",
			"          ",
			"          ",
			" d888b8b  ",
			"d8P' ?88  ",
			"88b  ,88b ",
			"`?88P'`88b",
			"          ",
			"          ",
			"          "		}));
	d_alloc(whimsy,b,'b',11,ARRAY({
			" d8b      ",
			" ?88      ",
			"  88b     ",
			"  888888b ",
			"  88P `?8b",
			" d88,  d88",
			"d88'`?88P'",
			"          ",
			"          ",
			"          "		}));
	d_alloc(whimsy,c,'c',8,ARRAY({
			"       ",
			"       ",
			"       ",
			" d8888b",
			"d8P' `P",
			"88b    ",
			"`?888P'",
			"       ",
			"       ",
			"       "		}));
	d_alloc(whimsy,d,'d',11,ARRAY({
			"      d8b ",
			"      88P ",
			"     d88  ",
			" d888888  ",
			"d8P' ?88  ",
			"88b  ,88b ",
			"`?88P'`88b",
			"          ",
			"          ",
			"          "		}));
	d_alloc(whimsy,e,'e',8,ARRAY({
			"       ",
			"       ",
			"       ",
			" d8888b",
			"d8b_,dP",
			"88b    ",
			"`?888P'",
			"       ",
			"       ",
			"       "		}));
	d_alloc(whimsy,f,'f',11,ARRAY({
			"   ,d8888b",
			"   88P'   ",
			"d888888P  ",
			"  ?88'    ",
			"  88P     ",
			" d88      ",
			"d88'      ",
			"          ",
			"          ",
			"          "		}));
	d_alloc(whimsy,g,'g',11,ARRAY({
			"          ",
			"          ",
			"          ",
			" d888b8b  ",
			"d8P' ?88  ",
			"88b  ,88b ",
			"`?88P'`88b",
			"       )88",
			"      ,88P",
			"  `?8888P "		}));
	d_alloc(whimsy,h,'h',11,ARRAY({
			" d8b      ",
			" ?88      ",
			"  88b     ",
			"  888888b ",
			"  88P `?8b",
			" d88   88P",
			"d88'   88b",
			"          ",
			"          ",
			"          "		}));
	d_alloc(whimsy,i,'i',6,ARRAY({
			"  d8,",
			" `8P ",
			"     ",
			"  88b",
			"  88P",
			" d88 ",
			"d88' ",
			"     ",
			"     ",
			"     "			}));
	d_alloc(whimsy,j,'j',8,ARRAY({
			"   d8, ",
			"  `8P  ",
			"       ",
			"  d88  ",
			"  ?88  ",
			"   88b ",
			"   `88b",
			"    )88",
			"   ,88P",
			"`?888P "		}));
	d_alloc(whimsy,k,'k',12,ARRAY({
			" d8b       ",
			" ?88       ",
			"  88b      ",
			"  888  d88'",
			"  888bd8P' ",
			" d88888b   ",
			"d88' `?88b,",
			"           ",
			"           ",
			"           "		}));
	d_alloc(whimsy,l,'l',6,ARRAY({
			" d8b ",
			" 88P ",
			"d88  ",
			"888  ",
			"?88  ",
			" 88b ",
			"  88b",
			"     ",
			"     ",
			"     "			}));
	d_alloc(whimsy,m,'m',15,ARRAY({
			"              ",
			"              ",
			"              ",
			"  88bd8b,d88b ",
			"  88P'`?8P'?8b",
			" d88  d88  88P",
			"d88' d88'  88b",
			"              ",
			"              ",
			"              "	}));
	d_alloc(whimsy,n,'n',11,ARRAY({
			"          ",
			"          ",
			"          ",
			"  88bd88b ",
			"  88P' ?8b",
			" d88   88P",
			"d88'   88b",
			"          ",
			"          ",
			"          "		}));
	d_alloc(whimsy,o,'o',9,ARRAY({
			"        ",
			"        ",
			"        ",
			" d8888b ",
			"d8P' ?88",
			"88b  d88",
			"`?8888P'",
			"        ",
			"        ",
			"        "		}));
	d_alloc(whimsy,p,'p',11,ARRAY({
			"          ",
			"          ",
			"          ",
			"?88,.d88b,",
			"`?88'  ?88",
			"  88b  d8P",
			"  888888P'",
			"  88P'    ",
			" d88      ",
			" ?8P      "		}));
	d_alloc(whimsy,q,'q',11,ARRAY({
			"          ",
			"          ",
			"          ",
			".d88b,.88P",
			"88P  `88P'",
			"?8b  d88  ",
			"`?888888  ",
			"    `?88  ",
			"      88b ",
			"      ?8P "		}));
	d_alloc(whimsy,r,'r',10,ARRAY({
			"         ",
			"         ",
			"         ",
			"  88bd88b",
			"  88P'  `",
			" d88     ",
			"d88'     ",
			"         ",
			"         ",
			"         "		}));
	d_alloc(whimsy,s,'s',9,ARRAY({
			"        ",
			"        ",
			"        ",
			" .d888b,",
			" ?8b,   ",
			"   `?8b ",
			"`?888P' ",
			"        ",
			"        ",
			"        "		}));
	d_alloc(whimsy,t,'t',9,ARRAY({
			"        ",
			"   d8P  ",
			"d888888P",
			"  ?88'  ",
			"  88P   ",
			"  88b   ",
			"  `?8b  ",
			"        ",
			"        ",
			"        "		}));
	d_alloc(whimsy,u,'u',10,ARRAY({
			"         ",
			"         ",
			"         ",
			"?88   d8P",
			"d88   88 ",
			"?8(  d88 ",
			"`?88P'?8b",
			"         ",
			"         ",
			"         "		}));
	d_alloc(whimsy,v,'v',10,ARRAY({
			"         ",
			"         ",
			"         ",
			"?88   d8P",
			"d88  d8P'",
			"?8b ,88' ",
			"`?888P'  ",
			"         ",
			"         ",
			"         "		}));
	d_alloc(whimsy,w,'w',16,ARRAY({
			"               ",
			"               ",
			"               ",
			" ?88   d8P  d8P",
			" d88  d8P' d8P'",
			" ?8b ,88b ,88' ",
			" `?888P'888P'  ",
			"               ",
			"               ",
			"               "	}));
	d_alloc(whimsy,x,'x',10,ARRAY({
			"         ",
			"         ",
			"         ",
			"?88,  88P",
			" `?8bd8P'",
			" d8P?8b, ",
			"d8P' `?8b",
			"         ",
			"         ",
			"         "
						}));
	d_alloc(whimsy,y,'y',11,ARRAY({
			"          ",
			"          ",
			"          ",
			"?88   d8P ",
			"d88   88  ",
			"?8(  d88  ",
			"`?88P'?8b ",
			"       )88",
			"      ,d8P",
			"   `?888P'"		}));
	d_alloc(whimsy,z,'z',9,ARRAY({
			"        ",
			"        ",
			"        ",
			"d88888P ",
			"   d8P' ",
			" d8P'   ",
			"d88888P'",
			"        ",
			"        ",
			"        "		}));
	return 0;
}
int whimsy_exit(void){
	for(int i=0;i<whimsy.d_n;i++)
		for(int j=0;j<whimsy.c;j++)
			free(whimsy.d[i][j]);
	for(int i=0;i<whimsy.d_n;i++)
		free(whimsy.d[i]);
	free(whimsy.d);
	free(whimsy.r);
}
int whimsy_print(const char* s){
	int n = strlen(s);
	for(int i=0;i<n;i++)
                if(whimsy.allowed(s[i]) != 1)
                        return -1;
	for (int i=0;i<whimsy.c;i++)
        {
                for(int j=0;j<n;j++)
                        fputs(whimsy.d[whimsy.index(s[j])][i],stdout);
                putchar('\n');
        }

}
#endif
