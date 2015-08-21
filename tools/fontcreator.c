#include <stdio.h>
#include <string.h>
#define FNAME_MAX 100
int main()
{
	puts("Enter Font name (less than 100 character)");
	char fontname[110];
	scanf("%s",fontname);
	FILE *font_h;
	FILE *font_c;	
	font_h = fopen(strcat(fontname,".h"),"w+");
	fontname[strlen(fontname)-2]=0;
	font_c = fopen(strcat(fontname,".c"),"w+");
	fontname[strlen(fontname)-2]=0;
	fprintf(font_h,	"#ifndef _%s_font_\n",fontname);
	fprintf(font_h,	"#define _%s_font_\n",fontname);
	fputs(		"#include <core.h>\n",font_h);
	fputs(		"#include <ctype.h>\n",font_h);
	fputs(		"#include <stdlib.h>\n",font_h);
	fputs(		"#include <string.h>\n",font_h);
	fprintf(font_h,	"int %s_allowed(int c);\n",fontname);
	fprintf(font_h,	"int %s_index (int c);\n",fontname);
	fprintf(font_h,	"int %s_init(void);\n",fontname);
	fprintf(font_h,	"int %s_exit(void);\n",fontname);
	fprintf(font_h,	"int %s_print(const char* s);\n,",fontname);
	fprintf(font_h,	"struct font %s = {\n",fontname);
	fprintf(font_h,	"\t.allowed = %s_allowed,\n",fontname);
	fprintf(font_h,	"\t.index = %s_index,\n",fontname);
	fprintf(font_h,	"\t.init = %s_init,\n",fontname);
	fprintf(font_h,	"\t.exit = %s_exit,\n",fontname);
	fprintf(font_h,	"\t.print = %s_print\n};\n",fontname);
	fputs(		"#endif",font_h);
	fclose(font_h);
	fprintf(font_c,"include <%s.h>\n",fontname);
	fputs(		"//extra includes should be done here\n",font_c);
	fprintf(font_c,	"int %s_allowed(int c)\n{\n\n}",fontname);
	fprintf(font_c,	"int %s_index(int c)\n{\n\n}",fontname);
	fprintf(font_c, "int %s_init(void)\n{\n",fontname);
	puts("Enter the number of valid character:");
	int valid_n;
	scanf("%i",&valid_n);
	puts("Enter number of character height:");
	int h;
	scanf("%i",&h);
	fprintf(font_c,"\tfont_alloc(%s,%i,%i);",fontname,h,valid_n);
	char s[100];
	int done =0;
	for(int n=0;n<valid_n;n++){
		done =0;
		puts("enter the character:");
		char c;
		do{scanf("%c",&c);} while(c=='\n');
		char token[100];
		puts("enter the unique token (the character name)");
		scanf("%s",token);
		puts("Enter the design");
		fprintf(font_c,"\td_alloc(%s,%s,'%c',",fontname,token,c);
		for (int i=0;i<h;i++)
		{
			gets(s);
			fputs(s,font_c);
			if(!done){
				fprintf(font_c,"%i,ARRAY({",(int)strlen(s)+1);
				done =1;}
			fprintf(font_c,"\"%s\"",s);
			if(i!=h-1) fputc(',',font_c);
		}
		fputs("}));\n",font_c);
	}
	fprintf(font_c,"int %s_exit(void)\n{\n\n}\n",fontname);
	fprintf(font_c,"int %s_print(const char* s)\n{\n\n}\n",fontname);
	fclose(font_c);
	puts("done!");
}
