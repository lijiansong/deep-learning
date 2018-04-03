#include "conditional.h"
#include "is_same.h"

#include <iostream>
#include <type_traits>
#include <typeinfo>

int main() {
  typedef foo::conditional<true, int, double>::type Type1;
  typedef foo::conditional<false, int, double>::type Type2;
  typedef foo::conditional<sizeof(int) >= sizeof(double), int, double>::type Type3;

  std::cout << typeid(Type1).name() << '\n'; // i
  std::cout << typeid(Type2).name() << '\n'; // d
  std::cout << typeid(Type3).name() << '\n'; // d

  //std::cout << foo::is_same<int, Type1>::value << '\n'; // true
  //std::cout << foo::is_same<double, Type1>::value << '\n'; // false
  //std::cout << foo::is_same<double, Type2>::value << '\n'; // true
  //std::cout << foo::is_same<double, Type3>::value << '\n'; // true
  return 0;
}
