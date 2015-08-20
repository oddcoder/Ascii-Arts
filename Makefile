all:
	rm -f hello
	gcc hello.c -o hello -g -ggdb3 -std=gnu99
