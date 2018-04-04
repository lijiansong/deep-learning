#ifndef _IS_SAME_H_
#define _IS_SAME_H_

namespace foo {

// TODO: implement std::is_same
// Notice: REF to headers of c++ 5.4.0
namespace utils {
template <typename, typename> struct is_same;

/// integral_constant
template <typename _Tp, _Tp __v> struct integral_constant {
  static constexpr _Tp value = __v;
  using value_type = _Tp;
  using type = integral_constant<_Tp, __v>;
  constexpr operator value_type() { return value; }
};

template <typename _Tp, _Tp __v>
constexpr _Tp integral_constant<_Tp, __v>::value;

/// The type used as a compile-time boolean with true value.
using true_type = integral_constant<bool, true>;

/// The type used as a compile-time boolean with false value.
using false_type = integral_constant<bool, false>;

template <typename, typename> struct is_same : public false_type {};

template <typename _Tp> struct is_same<_Tp, _Tp> : public true_type {};

} // end of namespace utils

} // end of namespace foo

#endif // _IS_SAME_H_
