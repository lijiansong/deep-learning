#ifndef _CONDITIONAL_H_
#define _CONDITIONAL_H_

namespace foo {

// replace std::conditional
template <bool, typename, typename> struct conditional;

template <bool Cond, typename IfTrue, typename IfFalse> struct conditional {
  using type = IfFalse;
};

template <typename IfTrue, typename IfFalse>
struct conditional<true, IfTrue, IfFalse> {
  using type = IfTrue;
};

} // end of namespace foo

#endif // _CONDITIONAL_H_
