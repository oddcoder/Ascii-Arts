install: lib
	@mv include/* /usr/include;\
	mv ascii-arts.so /usr/lib
lib:
	@cd fonts;		\
	make sharedlib;		\
	mv ascii-arts.so ../
	
clean:
	@rm *.so -f;		\
	cd fonts;		\
	rm *.o -f;		\
	cd ../demo;		\
	rm *-d -f;
demos:
	@cd demo;		\
	make whimsy
