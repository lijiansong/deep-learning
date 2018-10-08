#pragma once

#include <xmmintrin.h>
#include <cmath>
#include <algorithm>

#define CACHE_SIZE 1024

namespace cn {

template <typename T, int N>
struct Vector {
  //Vector() {}
  Vector(T *data) : _data(data) {}
  constexpr int size() const { return N; }

  //inline Vector &operator=(const BinaryAddExp &src) {
  //  for (int i = 0; i < len; ++i) {
  //    _data[i] = src.lhs.data[i] + src.rhs.data[i];
  //  }
  //  return *this;
  //}

  T *_data;
};

using __vf1024 = Vector<float, 1024>;

__vf1024 __vec_fadd(const __vf1024 &x, const __vf1024 &y) {
  float res[1024];
  for(int i = 0; i < 1024; ++i) {
    res[i] = x._data[i] + y._data[i];
  }
  return __vf1024(res);
}
__vf1024 __vec_fsub(__vf1024 &x, __vf1024 &y) {
  float res[1024];
  for(int i = 0; i < 1024; ++i) {
    res[i] = x._data[i] - y._data[i];
  }
  return __vf1024(res);
}
__vf1024 __vec_fmul(__vf1024 &x, __vf1024 &y) {
  float res[1024];
  for(int i = 0; i < 1024; ++i) {
    res[i] = x._data[i] * y._data[i];
  }
  return __vf1024(res);
}
__vf1024 __vec_fmin(__vf1024 &x, __vf1024 &y) {
  float res[1024];
  for(int i = 0; i < 1024; ++i) {
    res[i] = std::min(x._data[i], y._data[i]);
  }
  return __vf1024(res);
}
__vf1024 __vec_fmax(__vf1024 &x, __vf1024 &y) {
  float res[1024];
  for(int i = 0; i < 1024; ++i) {
    res[i] = std::max(x._data[i], y._data[i]);
  }
  return __vf1024(res);
}
__vf1024 __vec_fabs(__vf1024 &x) {
  float res[1024];
  for(int i = 0; i < 1024; ++i) {
    res[i] = std::abs(x._data[i]);
  }
  return __vf1024(res);
}
__vf1024 __vec_fsqrt(__vf1024 &x) {
  float res[1024];
  for(int i = 0; i < 1024; ++i) {
    res[i] = std::sqrt(x._data[i]);
  }
  return __vf1024(res);
}
__vf1024 __vec_fload(const float *src) {
  float res[1024];
  for(int i = 0; i < 1024; ++i) {
    res[i] = src[i];
  }
  return __vf1024(res);
}
void __vec_fstore(float *dst, const __vf1024 &x) {
  for(int i = 0; i < 1024; ++i) {
    dst[i] = x._data[i];
  }
}
__vf1024 __vec_fset(float value) {
  float res[1024];
  for(int i = 0; i < 1024; ++i) {
    res[i] = value;
  }
  return __vf1024(res);
}

  template <unsigned N>
  struct Placeholder {
    template <class T, unsigned M>
    T apply(T (&x)[M]) const {
      static_assert(N < M,
                    "Too few arguments to placeholder expression,"
                    "this is probably due to passing an expression"
                    "with more placeholders than actual inputs.");
      return x[N];
    }
  };

  class Constant {
  public:
    Constant(float value) : _value(value) {}
    template <unsigned N>
    __vf1024 apply(__vf1024(&)[N]) const { return __vec_fset(_value); }
    template <unsigned N>
    float apply(float(&)[N]) const { return _value; }
  private:
    float _value;
  };

  template <typename L, typename R, typename Op>
  class BinOp {
  public:
    BinOp(const L& l, const R& r) : _l(l), _r(r) {}

    template <typename T, unsigned N>
    T apply(T (&x)[N]) const {
      return Op::eval(_l.apply(x), _r.apply(x));
    }
  private:
    const L _l;
    const R _r;
  };

  struct AddOp {
    static __vf1024 eval(__vf1024 x, __vf1024 y) {
      return __vec_fadd(x, y);
    }
    static float eval(float x, float y) {
      return x + y;
    }
  };

  struct SubOp {
    static __vf1024 eval(__vf1024 x, __vf1024 y) {
      return __vec_fsub(x, y);
    }
    static float eval(float x, float y) {
      return x - y;
    }
  };

  struct MulOp {
    static __vf1024 eval(__vf1024 x, __vf1024 y) {
      return __vec_fmul(x, y);
    }
    static float eval(float x, float y) {
      return x * y;
    }
  };

  struct MaxOp {
    static __vf1024 eval(__vf1024 x, __vf1024 y) {
      return __vec_fmax(x, y);
    }
    static float eval(float x, float y) {
      return std::max(x, y);
    }
  };

  struct MinOp {
    static __vf1024 eval(__vf1024 x, __vf1024 y) {
      return __vec_fmin(x, y);
    }
    static float eval(float x, float y) {
      return std::min(x, y);
    }
  };

  template <typename T>
  class Expr {
  public:
    Expr(const T& t) : _t(t) {}
    Expr() : _t() {}

    template <unsigned N>
    __vf1024 apply(__vf1024 (&x)[N]) const {
      return _t.apply(x);
    }
    template <unsigned N>
    float apply(float (&x)[N]) const {
      return _t.apply(x);
    }
  private:
    const T _t;
  };

  const Expr<Placeholder<0>> _x;
  const Expr<Placeholder<1>> _y;

  // Macro for generating binary operators. OpFunction is the C++ function
  // the user calls, i.e. operator+ or max. BinOpClass is the expression
  // template class that implements the operator.
#define GENERATE_BINARY_OPERATOR(OpFunction, BinOpClass)              \
  template <class L, class R>                                         \
  Expr<BinOp<Expr<L>, Expr<R>, BinOpClass>>                           \
  OpFunction(const Expr<L>& l, const Expr<R>& r) {                    \
    using binop_type = BinOp<Expr<L>, Expr<R>, BinOpClass>;           \
    return Expr<binop_type>(binop_type(l, r));                        \
  }                                                                   \
  template <class L>                                                  \
  Expr<BinOp<Expr<L>, Expr<Constant>, BinOpClass>>                    \
  OpFunction(const Expr<L>& l, float r) {                             \
    using binop_type = BinOp<Expr<L>, Expr<Constant>, BinOpClass>;    \
    Expr<Constant> c= Constant(r);                                    \
    return Expr<binop_type>(binop_type(l, c));                        \
  }                                                                   \
  template <class R>                                                  \
  Expr<BinOp<Expr<Constant>, Expr<R>, BinOpClass>>                    \
  OpFunction(float l, const Expr<R>& r) {                             \
    using binop_type = BinOp<Expr<Constant>, Expr<R>, BinOpClass>;    \
    Expr<Constant> c= Constant(l);                                    \
    return Expr<binop_type>(binop_type(c, r));                        \
  }                                                                   \

  GENERATE_BINARY_OPERATOR(operator+, AddOp)
  GENERATE_BINARY_OPERATOR(operator-, SubOp)
  GENERATE_BINARY_OPERATOR(operator*, MulOp)
  GENERATE_BINARY_OPERATOR(max, MaxOp)
  GENERATE_BINARY_OPERATOR(min, MinOp)

#undef GENERATE_BINARY_OPERATOR

  template <typename T, typename Op>
  class UnaryOp {
  public:
    UnaryOp(const T& t) : _t(t) {}

    template <unsigned N>
    __vf1024 apply(__vf1024 (&x)[N]) const {
      return Op::eval(_t.apply(x));
    }
    template <unsigned N>
    float apply(float (&x)[N]) const {
      return Op::eval(_t.apply(x));
    }
  private:
    const T _t;
  };

  struct AbsOp {
    static __vf1024 eval(__vf1024 x) {
      return __vec_fabs(x);
    }
    static float eval(float x) {
      return std::abs(x);
    }
  };

  struct SqrtOp {
    static __vf1024 eval(__vf1024 x) {
      return __vec_fsqrt(x);
    }
    static float eval(float x) {
      return std::sqrt(x);
    }
  };

  // Macro for generating unary operators. OpFunction is the C++ function
  // the user calls, i.e. abs or sqrt. UnOpClass is the expression
  // template class that implements the operator.
#define GENERATE_UNARY_OPERATOR(OpFunction, UnOpClass)              \
  template <typename T>                                             \
  Expr<UnaryOp<Expr<T>, UnOpClass>> OpFunction(const Expr<T>& t) {  \
    using unop_type = UnaryOp<Expr<T>, UnOpClass>;                  \
    return Expr<unop_type>(unop_type(t));                           \
  }

  GENERATE_UNARY_OPERATOR(abs, AbsOp)
  GENERATE_UNARY_OPERATOR(sqrt, SqrtOp)

#undef GENERATE_UNARY_OPERATOR

  template <typename F>
  void apply(unsigned n, const float* src, float* target, F f) {
    for (; n>=1024; n-=1024, src+=1024, target+=1024) {
      __vf1024 x[]= { __vec_fload(src) };
      __vec_fstore(target, f.apply(x));
    }

    for (; n>0; --n, ++src, ++target) {
      float x[]= { *src };
      *target= f.apply(x);
    }
  }

  template <typename F>
  void apply2(unsigned n, const float* src1, const float* src2,
              float* target, F f) {
    for (; n>=1024; n-=1024, src1+=1024, src2+=1024, target+=1024) {
      __vf1024 x[]= { __vec_fload(src1), __vec_fload(src2) };
      __vec_fstore(target, f.apply(x));
    }

    for (; n>0; --n, ++src1, ++src2, ++target) {
      float x[]= { *src1, *src2 };
      *target= f.apply(x);
    }
  }
} // end of namespace cn

