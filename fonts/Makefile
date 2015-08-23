sharedlib: whimsy.o StarStrips.o
	@echo Building the Shared Library;	\
	gcc  -shared -fPIC -o ascii-arts.so whimsy.o StarStrips.o; 	
StarStrips.o : StarStrips.c
	@echo building StarStrips;			\
	gcc -c -fPIC StarStrips.c -o StarStrips.o -std=c99 -I../include 
whimsy.o : whimsy.c
	@echo building whimsy;			\
	gcc -c -fPIC whimsy.c -o whimsy.o -std=c99 -I../include 
