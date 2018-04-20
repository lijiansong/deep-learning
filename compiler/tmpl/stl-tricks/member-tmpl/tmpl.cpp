#include <iostream>

class alloc {};
template <typename T, class Alloc = alloc> class vector {
public:
  using value_type = T;
  using iterator = value_type *;

  template <typename U> void insert(iterator pos, U first, U last) {
    std::cout << "xxxxx\n";
  }
};

int main() {
  int a[3] = {1, 2, 3};
  vector<int> v;
  vector<int>::iterator it;
  v.insert(it, a, a + 3);
  return 0;
}
