#include <StarStrips.h>
#include <stdio.h>
#include <string.h>
int main(){
	printf("enter some text\n");
	char s[100];
	fgets(s,99,stdin);
	s[strlen(s)-1] =0;	
	StarStrips.init();
	StarStrips.print(s);
	StarStrips.exit();
}
