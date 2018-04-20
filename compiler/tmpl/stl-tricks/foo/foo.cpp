#include <iostream>

class alloc {};

template <typename T, class Alloc = alloc>
class foo {
public:
  void bar(foo<T, Alloc> &) { std::cout << "test\n"; }
};

template <typename T, class Alloc>
inline void bar(foo<T, Alloc> &x, foo<T, Alloc> &y) {
  x.bar(y);
}

int main() {
  foo<int> x, y;
  bar(x, y);
  return 0;
}
