#include <algorithm>
#include <cstddef>
#include <iostream>
#include <vector>

template <typename T> class print {
public:
  void operator()(const T &elem) { std::cout << elem << '\n'; }
};

int main() {
  int a[3] = {1, 2, 3};
  std::vector<int> v(a, a + 3);
  for_each(v.begin(), v.end(), print<int>());
  return 0;
}
