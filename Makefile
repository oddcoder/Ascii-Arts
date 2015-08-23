uninstall:
	@echo Uninstalling library; 	\
	rm /usr/lib/libaarts.so -f; 	\
	cd /usr/include			\
	rm whimsy.h core.h StarStrips.h -f
install: lib
	@echo Installing library;	\
	cp include/*.h /usr/include/;	\
	cp libaarts.so /usr/lib/
lib:
	@cd fonts;			\
	make sharedlib;			\
	mv ascii-arts.so ../libaarts.so
	
clean:
	@rm *.so -f;			\
	cd fonts;			\
	rm *.o -f;			\
	cd ../demo;			\
	rm *-d -f;
demos:
	@cd demo;			\
	make whimsy
