// lazy eval
#include <cstdio>
#include <iostream>
#include <ostream>

template <typename SubType> struct Exp {
  inline const SubType &self() const {
    return *static_cast<const SubType *>(this);
  }
};

struct mul {
  inline static float Map(float a, float b) { return a * b; }
};

template <typename OP, typename TLhs, typename TRhs>
struct BinaryMapExp : public Exp<BinaryMapExp<OP, TLhs, TRhs>> {
  const TLhs &lhs;
  const TRhs &rhs;
  BinaryMapExp(const TLhs &lhs, const TRhs &rhs) : lhs(lhs), rhs(rhs) {}
  inline float Eval(int i) const { return OP::Map(lhs.Eval(i), rhs.Eval(i)); }
};

struct Vec : public Exp<Vec> {
  int len;
  float *dptr;
  Vec() {}
  Vec(float *dptr, int len) : len(len), dptr(dptr) {}
  constexpr int size() const { return len; }

  template <typename EType> inline Vec &operator=(const Exp<EType> &src_) {
    const EType &src = src_.self();
    for (int i = 0; i < len; ++i) {
      dptr[i] = src.Eval(i);
    }
    return *this;
  }

  inline float Eval(int i) const { return dptr[i]; }
};

template <typename OP, typename TLhs, typename TRhs>
inline BinaryMapExp<OP, TLhs, TRhs> F(const Exp<TLhs> &lhs,
                                      const Exp<TRhs> &rhs) {
  return BinaryMapExp<OP, TLhs, TRhs>(lhs.self(), rhs.self());
}

template <typename TLhs, typename TRhs>
inline BinaryMapExp<mul, TLhs, TRhs> operator*(const Exp<TLhs> &lhs,
                                               const Exp<TRhs> &rhs) {
  return F<mul>(lhs, rhs);
}

std::ostream &operator<<(std::ostream &os, const Vec &x) {
  for (int i = 0; i < x.size(); ++i) {
    os << x.dptr[i] << " ";
  }
  os << '\n';
  return os;
}

// user defined operation
struct max {
  inline static float Map(float a, float b) { return a > b ? a : b; }
};

int main() {
  const int n = 3;
  float sa[n] = {1, 2, 3};
  float sb[n] = {2, 3, 4};
  float sc[n] = {3, 4, 5};
  Vec A(sa, n), B(sb, n), C(sc, n);
  A = B * F<max>(C, B);
  std::cout << A;
  for (int i = 0; i < n; ++i) {
    printf("%d: %f == %f * max(%f, %f)\n", i, A.dptr[i], B.dptr[i], C.dptr[i],
           B.dptr[i]);
  }
  return 0;
}
