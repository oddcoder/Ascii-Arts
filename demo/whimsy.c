#include <stdio.h>
#include <string.h>
#include <whimsy.h>
int main(){
	printf("enter some text\n");
	char s[100];
	fgets(s,99,stdin);
	s[strlen(s)-1] = 0;
	whimsy.init();
	whimsy.print(s);
	whimsy.exit();
}
