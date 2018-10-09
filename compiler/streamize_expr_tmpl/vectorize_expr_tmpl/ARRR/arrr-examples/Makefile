all:
	g++ -mavx -I .. -I /usr/include/malloc -std=c++11 foo.cpp -o foo
	g++ -S -mavx -I .. -I /usr/include/malloc -std=c++11 foo.cpp -o foo-g++.s
	clang++ -S -mavx -I .. -I /usr/include/malloc -std=c++11 foo.cpp -o foo-clang++.s
clean:
	@rm -f foo
	@rm -rf *.dSYM
