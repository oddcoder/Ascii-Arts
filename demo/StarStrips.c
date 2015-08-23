#include <StarStrips.h>
#include <stdio.h>
int main(){
	printf("enter some text\n");
	char s[100];
	gets(s);	
	StarStrips.init();
	StarStrips.print(s);
	StarStrips.exit();
}
