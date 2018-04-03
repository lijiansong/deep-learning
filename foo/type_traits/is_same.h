#ifndef _IS_SAME_H_
#define _IS_SAME_H_

namespace foo {

// TODO: implement std::is_same
template <class T, class U> struct is_same {
};

template <class T> struct is_same<T, T> {
};

} // end of namespace foo

#endif // _IS_SAME_H_
