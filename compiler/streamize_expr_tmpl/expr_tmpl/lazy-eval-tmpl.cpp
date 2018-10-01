// cpp expression tmpl
//
#include <iostream>
using namespace std;

template <typename A, typename T>
class Expr {
public:
  Expr(const A &x = A()) : a_(x) {}
  T operator()(T x) const { return a_(x); }

private:
  A a_;
};

template <typename T>
class ExprLiteral {
public:
  ExprLiteral(T value) : value_(value) {}
  T operator()(T x) const { return value_; }

private:
  T value_;
};

template <typename T>
class Add {
public:
  static T apply(T a, T b) { return a + b; }
};

template <typename T>
class Sub {
public:
  static T apply(T a, T b) { return a - b; }
};

template <typename A, typename B, typename Op, typename T>
class BinaryExprOp {
public:
  BinaryExprOp(const A &a, const B &b) : a_(a), b_(b) {}
  T operator()(T x) const { return Op::apply(a_(x), b_(x)); }

private:
  A a_;
  B b_;
};

template <typename A, typename Op, typename T>
class UnaryExprOp {
public:
  UnaryExprOp(const A &a) : a_(a) {}
  T operator()(T x) const { return Op::apply(a_(x)); }

private:
  A a_;
};

template <typename A, typename T>
Expr<BinaryExprOp<ExprLiteral<T>, Expr<A, T>, Add<T>, T>, T>
operator+(T x, const Expr<A, T> &a) {
  using BinExprT = BinaryExprOp<ExprLiteral<T>, Expr<A, T>, Add<T>, T>;
  return Expr<BinExprT, T>(BinExprT(ExprLiteral<T>(x), a));
}

template <typename A, typename T>
Expr<BinaryExprOp<ExprLiteral<T>, Expr<A, T>, Add<T>, T>, T>
operator+(const Expr<A, T> &a, T x) {
  return x + a;
}

template <typename A, typename B, typename T>
Expr<BinaryExprOp<Expr<A, T>, Expr<B, T>, Add<T>, T>, T>
operator+(const Expr<A, T> &a, const Expr<B, T> &b) {
  using BinExprT = BinaryExprOp<Expr<A, T>, Expr<B, T>, Add<T>, T>;
  return Expr<BinExprT, T>(BinExprT(a, b));
}

template <typename A, typename T>
Expr<BinaryExprOp<ExprLiteral<T>, Expr<A, T>, Sub<T>, T>, T>
operator-(T x, const Expr<A, T> &a) {
  using BinExprT = BinaryExprOp<ExprLiteral<T>, Expr<A, T>, Sub<T>, T>;
  return Expr<BinExprT, T>(BinExprT(ExprLiteral<T>(x), a));
}

template <typename A, typename T>
Expr<BinaryExprOp<Expr<A, T>, ExprLiteral<T>, Sub<T>, T>, T>
operator-(const Expr<A, T> &a, T x) {
  using BinExprT = BinaryExprOp<Expr<A, T>, ExprLiteral<T>, Sub<T>, T>;
  return Expr<BinExprT, T>(BinExprT(a, ExprLiteral<T>(x)));
}

template <typename A, typename B, typename T>
Expr<BinaryExprOp<Expr<A, T>, Expr<B, T>, Sub<T>, T>, T>
operator-(const Expr<A, T> &a, const Expr<B, T> &b) {
  using BinExprT = BinaryExprOp<Expr<A, T>, Expr<B, T>, Sub<T>, T>;
  return Expr<BinExprT, T>(BinExprT(a, b));
}

template <typename E, typename T>
void eval(Expr<E, T> expr, T x) {
  std::cout << expr(x) << std::endl;
}

template<typename T>
class ExprId {
public:
  T operator()(T x) const { return x; }
};
using PlaceHolder_t = Expr<ExprId<float>, float>;

int main() {
  PlaceHolder_t x;
  eval(x - (x - 2.f + 1.f), 1.f); // 1
  eval(x - 2.f + 1.f, 1.5f); // 0.5
  eval(x - (2.f + 1.f), 1.5f); // -1.5
  eval(x - (x + 1.f), 1.5f); // -1
  eval(x - (x + 1.f - x + (1.5f + x)), 1.5f); // -2.5
  return 0;
}
