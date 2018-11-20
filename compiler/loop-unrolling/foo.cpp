#include <iostream>

template <int N, typename B> struct UNROLL;

template <int N, typename B> struct FOR {
  static void loop(int step) {
    for (int i = 0; i < N / step; ++i) {
      UNROLL<N, B>::iteration(i * N);
    }
    for (int i = 0; i < N % step; ++i) {
      B::body(N * step / N + i);
    }
  }
};
template <int N, typename B> struct UNROLL {
  static void iteration(int i) {
    B::body(i);
    UNROLL<N - 1, B>::iteration(i + 1);
  }
};
template <typename B> struct UNROLL<0, B> {
  static void iteration(int i) {}
};
#include <cstdint>
#include <iostream>

template <int i, uint64_t val, typename Function> class Loop {
public:
  static inline void call(Function f) {
    f(i, val);
    Loop<i - 1, val, Function>::call(f);
  }
};

template <uint64_t val, typename Function> class Loop<0, val, Function> {
public:
  static inline void call(Function f) { f(0, val); }
};

void print(int i, uint64_t val) {
  char c = ((val) & (((uint64_t)1) << i)) ? '1' : '0';
  std::cout << c;
}

int main(void) {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
  const uint64_t number = 0x00000001;
  Loop<99, number, decltype(print)>::call(print);
  std::cout << std::endl;
  return 0;
}
