#CXX := clang++
CXX := g++

CXX_FLAGS := -std=c++11

foo: foo.o
	$(CXX) -o $@ $+
foo.o: foo.cpp
	$(CXX) $(CXX_FLAGS) -c $< -I. -o $@

clean:
	@rm -f *.o
	@rm -f foo
