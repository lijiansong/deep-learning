#include "conditional.h"
#include "is_same.h"

#include <cstdint>
#include <iostream>

int main() {
  using Type1 = foo::conditional<true, int, double>::type;
  using Type2 = foo::conditional<false, int, double>::type;
  using Type3 = foo::conditional<sizeof(int) >= sizeof(double), int, double>::type;

  std::cout << foo::utils::is_same<int, int64_t>::value << '\n';   // false
  std::cout << foo::utils::is_same<long, long int>::value << '\n'; // true
  std::cout << foo::utils::is_same<int, Type1>::value << '\n';     // true
  std::cout << foo::utils::is_same<double, Type1>::value << '\n';  // false
  std::cout << foo::utils::is_same<double, Type2>::value << '\n';  // true
  std::cout << foo::utils::is_same<double, Type3>::value << '\n';  // true
  return 0;
}
