lib:
	@cd fonts;		\
	gcc -shared -o asci-arts.so
	
demos:
	@cd demo;		\
	make whimsy
