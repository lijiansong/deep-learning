#include <cstddef>
#include <iostream>

class alloc {};

inline std::size_t __deque_buf_size(std::size_t n, std::size_t BufSize) {
  return n != 0 ? n : (BufSize < 512 ? std::size_t(512 / BufSize) : std::size_t(1));
}

template <typename T, class Ref, class Ptr, std::size_t BufSize>
struct __deque_iterator {
  using iterator = __deque_iterator<T, T &, T *, BufSize>;
  using const_iterator = __deque_iterator<T, const T &, const T *, BufSize>;

  static std::size_t buffer_size() {
    return __deque_buf_size(BufSize, sizeof(T));
  }
};

template <typename T, class Alloc = alloc, std::size_t BufSize = 0>
class deque {
public:
  using iterator = __deque_iterator<T, T &, T *, BufSize>;
  deque() { std::cout << "deque\n"; }
};

int main() {
  std::cout << deque<int>::iterator::buffer_size() << "\n"; // 512 / sizeof(int)
  std::cout << deque<int, alloc, 1024>::iterator::buffer_size() << "\n"; // 1024
  std::cout << deque<int, alloc, 64>::iterator::buffer_size() << "\n";   // 64
  return 0;
}
