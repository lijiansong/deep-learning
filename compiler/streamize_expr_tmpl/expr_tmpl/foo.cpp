// lazy eval
#include <iostream>
#include <ostream>

struct Vec;

struct BinaryAddExp {
  BinaryAddExp(const Vec &lhs, const Vec &rhs) : lhs(lhs), rhs(rhs) {}
  const Vec &lhs;
  const Vec &rhs;
};

struct Vec {
  Vec() {}
  Vec(float *dptr, int len) : len(len), dptr(dptr) {}
  constexpr int size() const { return len; }

  inline Vec &operator=(const BinaryAddExp &src) {
    for (int i = 0; i < len; ++i) {
      dptr[i] = src.lhs.dptr[i] + src.rhs.dptr[i];
    }
    return *this;
  }

  int len;
  float *dptr;
};

inline BinaryAddExp operator+(const Vec &lhs, const Vec &rhs) {
  return BinaryAddExp(lhs, rhs);
}

std::ostream &operator<<(std::ostream &os, const Vec &x) {
  for (int i = 0; i < x.size(); ++i) {
    os << x.dptr[i] << " ";
  }
  os << '\n';
  return os;
}

int main() {
  const int n = 3;
  float sa[n] = {1, 2, 3};
  float sb[n] = {2, 3, 4};
  float sc[n] = {3, 4, 5};
  Vec A(sa, n), B(sb, n), C(sc, n);
  A = B + C;
  std::cout << A;
  return 0;
}
