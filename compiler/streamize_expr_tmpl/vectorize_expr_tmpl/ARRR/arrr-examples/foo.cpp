#include "arrr.hpp"

#include <iostream>

int main() {
  const int size = 128;
  arrr::arithmetic_array<float> x(128);
  arrr::arithmetic_array<float> y(128);
  x = 23.f;
  y = 42.f;
  y += 3.14 * x;
  for (int i = 0; i < 128; ++i) {
    std::cout << y[i] << " ";
  }
  return 0;
}
