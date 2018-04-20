#include <cstddef>
#include <iostream>

class alloc {};
template <typename T, class Alloc = alloc, std::size_t BufSize = 0>
class deque {
public:
  deque() { std::cout << "deque\n"; }
};

template <typename T, class Sequence = deque<T>> class stack {
public:
  stack() { std::cout << "stack\n"; }

private:
  Sequence seq;
};

int main() {
  stack<int> x;
  return 0;
}
