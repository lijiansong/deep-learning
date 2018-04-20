#include <iostream>

template <typename T, typename U> struct foo {
  foo() { std::cout << "T, U\n"; }
};

template <typename T> struct foo<T *, T *> {
  foo() { std::cout << "T*, T*\n"; }
};

template <typename T> struct foo<const T *, T *> {
  foo() { std::cout << "const T*, T*\n"; }
};

int main() {
  foo<int, float> f1;
  foo<float *, float *> f2;
  foo<const int *, int *> f3;
  return 0;
}
