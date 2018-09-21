#include <iostream>
using namespace std;

template <typename A>
class Expr {
  A a_;
public:
  Expr(const A &x = A()) : a_(x) {}
  float operator()(float x) const { return a_(x); }
};

class ExprLiteral {
  float value_;
public:
  ExprLiteral(float value) : value_(value) {}
  float operator()(float x) const { return value_; }
};

class Add {
public:
  static float apply(float a, float b) { return a + b; }
};

class Sub {
public:
  static float apply(float a, float b) { return a - b; }
};

template <typename A, typename B, typename Op>
class BinaryExprOp {
  A a_;
  B b_;
public:
  BinaryExprOp(const A &a, const B &b) : a_(a), b_(b) {}
  float operator()(float x) const { return Op::apply(a_(x), b_(x)); }
};

template <typename A, typename Op>
class UnaryExprOp {
  A a_;
public:
  UnaryExprOp(const A &a) : a_(a) {}
  float operator()(float x) const { return Op::apply(a_(x)); }
};

template <typename A>
Expr<BinaryExprOp<ExprLiteral, Expr<A>, Add>>
operator+(float x, const Expr<A> &a) {
  using BinExprT = BinaryExprOp<ExprLiteral, Expr<A>, Add>;
  return Expr<BinExprT>(BinExprT(ExprLiteral(x), a));
}

template <typename A>
Expr<BinaryExprOp<ExprLiteral, Expr<A>, Add>>
operator+(const Expr<A> &a, float x) {
  return x + a;
}

template <typename A>
Expr<BinaryExprOp<ExprLiteral, Expr<A>, Sub>>
operator-(float x, const Expr<A> &a) {
  using BinExprT = BinaryExprOp<ExprLiteral, Expr<A>, Sub>;
  return Expr<BinExprT>(BinExprT(ExprLiteral(x), a));
}

template <typename A>
Expr<BinaryExprOp<Expr<A>, ExprLiteral, Sub>>
operator-(const Expr<A> &a, float x) {
  using BinExprT = BinaryExprOp<Expr<A>, ExprLiteral, Sub>;
  return Expr<BinExprT>(BinExprT(a, ExprLiteral(x)));
}

template <typename A, typename B>
Expr<BinaryExprOp<Expr<A>, Expr<B>, Add>>
operator+(const Expr<A> &a, const Expr<B> &b) {
  using BinExprT = BinaryExprOp<Expr<A>, Expr<B>, Add>;
  return Expr<BinExprT>(BinExprT(a, b));
}

template <typename A, typename B>
Expr<BinaryExprOp<Expr<A>, Expr<B>, Sub>>
operator-(const Expr<A> &a, const Expr<B> &b) {
  using BinExprT = BinaryExprOp<Expr<A>, Expr<B>, Sub>;
  return Expr<BinExprT>(BinExprT(a, b));
}

template <typename E>
void eval(Expr<E> expr, float x) {
  std::cout << expr(x) << std::endl;
}

class ExprId {
public:
  float operator()(float x) const { return x; }
};
typedef Expr<ExprId> PlaceHolder_t;

int main() {
  PlaceHolder_t x;
  eval(x - (x - 2.f + 1.f), 1.f); // 1
  eval(x - 2.f + 1.f, 1.5f); // 0.5
  eval(x - (2.f + 1.f), 1.5f); // -1.5
  eval(x - (x + 1.f), 1.5f); // -1
  eval(x - (x + 1.f - x + (1.5 + x)), 1.5f); // -2.5
  return 0;
}
