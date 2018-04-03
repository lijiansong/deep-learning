foo: foo.o
	g++ -std=c++11 -o $@ $+
foo.o: foo.cpp
	g++ -c $< -o $@
clean:
	@rm -f *.o
	@rm -f foo
