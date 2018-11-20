#include <iostream>

template <int N> struct Collection {
  int data[N];

  Collection() {
    for (int i = 0; i < N; ++i) {
      data[i] = 0;
    }
  };

  void Set(int v) {
    for (int i = 0; i < N; ++i) {
      data[i] = v;
    }
  };

  template <int I> int Get(void) const { return data[I]; };
};

template <int N, int I> void printElement(Collection<N> const &c) {
  std::cout << c.template Get<I>()
            << std::endl;
}

int main() {
  Collection<10> myc;
  myc.Set(5);
  printElement<10, 2>(myc);
  return 0;
}
