CXX := clang
LIB := libadd.dylib
foo: foo.o
	ln -sf ../../libadd.dylib $(LIB)
	$(CXX) -o $@ $+
foo.o: foo.c
	$(CXX) -c $< -o $@
clean:
	@rm -f foo
	@rm -f *.o
	@rm -f $(LIB)
