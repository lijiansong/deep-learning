#ifndef _ACCU_H_
#define _ACCU_H_
namespace foo {
template<class InputIt, class T>
T accumulate(InputIt first, InputIt last, T init)
{
    for (; first != last; ++first) {
        init = init + *first;
    }
    return init;
}

} // end of namespace foo

#endif // _ACCU_H_
