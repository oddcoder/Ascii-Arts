install: lib
	@cp include/*.h /usr/include/;\
	cp libaarts.so /usr/lib/
lib:
	@cd fonts;		\
	make sharedlib;		\
	mv ascii-arts.so ../libaarts.so
	
clean:
	@rm *.so -f;		\
	cd fonts;		\
	rm *.o -f;		\
	cd ../demo;		\
	rm *-d -f;
demos:
	@cd demo;		\
	make whimsy
