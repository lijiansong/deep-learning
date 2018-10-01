#include <iostream>
#include <ostream>

template <typename SubType> struct Exp {
  inline const SubType &self() const {
    return *static_cast<const SubType *>(this);
  }
};

template <typename TLhs, typename TRhs>
struct BinaryAddExp : public Exp<BinaryAddExp<TLhs, TRhs>> {
  const TLhs &lhs;
  const TRhs &rhs;
  BinaryAddExp(const TLhs &lhs, const TRhs &rhs) : lhs(lhs), rhs(rhs) {}

  inline float Eval(int i) const { return lhs.Eval(i) + rhs.Eval(i); }
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

template <typename TLhs, typename TRhs>
inline BinaryAddExp<TLhs, TRhs> operator+(const Exp<TLhs> &lhs,
                                          const Exp<TRhs> &rhs) {
  return BinaryAddExp<TLhs, TRhs>(lhs.self(), rhs.self());
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
  A = B + C + C;
  std::cout << A;
  return 0;
}
