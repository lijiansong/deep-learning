CXX := clang
LIB := libadd.dylib
foo: foo.o
	ln -sf ../../$(LIB)
	$(CXX) -o $@ $+ -L. -ladd
foo.o: addtest.c
	$(CXX) -c $< -o $@
clean:
	@rm -f foo
	@rm -f *.o
	@rm -f $(LIB)
