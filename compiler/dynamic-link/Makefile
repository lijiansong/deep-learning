all:
	gcc -c add.c -o add.o
	#ar rcs libadd.a add.o
	gcc add.o -dynamiclib -current_version 1.0 -o libadd.dylib

clean:
	@rm -f *.o
	@rm -f *.dylib
