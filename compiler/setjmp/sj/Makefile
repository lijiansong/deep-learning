CXX := gcc


foo: foo.o
	$(CXX) -o $@ $+
foo.o: foo.cpp
	$(CXX) -c $< -I. -o $@

clean:
	@rm -f *.o
	@rm -f foo
