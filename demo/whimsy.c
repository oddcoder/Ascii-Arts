#include <whimsy.h>
int main(){
	printf("enter some text\n");
	char s[100];
	gets(s);	
	whimsy.init();
	whimsy.print(s);
	whimsy.exit();
}
