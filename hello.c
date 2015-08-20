#include <stdio.h>
#include "include/whimsy.h"
int main()
{
	whimsy.init();
	char x[100];
	gets(x);
	whimsy.print(x);
	whimsy.exit();
	return 0;
}
