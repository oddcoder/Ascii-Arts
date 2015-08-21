sharedlib: whimsy.o
	@echo Building the Shared Library;	\
	gcc -shared -fPIC -o ascii-arts.so whimsy.o; 	\
	strip ascii-arts.so
whimsy.o : whimsy.c
	@echo building whimsy;			\
	gcc -c -fPIC whimsy.c -o whimsy.o -std=c99 -I../include 
