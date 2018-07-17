#include <functional>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

#include "accu.h"

int main() {
  std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  int sum = std::accumulate(v.begin(), v.end(), 0);
  int _sum = foo::accumulate(v.begin(), v.end(), 0);

  int product = std::accumulate(v.begin(), v.end(), 1, std::multiplies<int>());
  int _product = std::accumulate(v.end(), v.end(), 1, std::multiplies<int>());

  std::string s = std::accumulate(
      std::next(v.begin()), v.end(),
      std::to_string(v[0]), // start with first element
      [](std::string a, int b) { return a + '-' + std::to_string(b); });

  std::string _s = std::accumulate(
      std::next(v.begin()), v.end(),
      std::to_string(v[0]), // start with first element
      [](std::string a, int b) { return a + '-' + std::to_string(b); });

  std::cout << "sum: " << sum << '\n'
            << "product: " << product << '\n'
            << "dash-separated string: " << s << '\n';

  std::cout << "_sum: " << _sum << '\n'
            << "_product: " << _product << '\n'
            << "dash-separated string: " << _s << '\n';
}
