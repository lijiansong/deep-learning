#ifndef INITIALIZER_LIST_H
#define INITIALIZER_LIST_H

namespace foo {
/// initializer_list
template <typename _E> class initializer_list {
public:
  using value_type = _E;
  using reference = const _E &;
  using const_reference = const _E &;
  using size_type = size_t;
  using iterator = const _E *;
  using const_iterator = const _E *;

private:
  iterator _M_array;
  size_type _M_len;

  // The compiler can call a private constructor.
  constexpr initializer_list(const_iterator __a, size_type __l)
      : _M_array(__a), _M_len(__l) {}

public:
  constexpr initializer_list() noexcept : _M_array(0), _M_len(0) {}

  constexpr size_type size() const noexcept { return _M_len; }

  constexpr const_iterator begin() const noexcept { return _M_array; }

  constexpr const_iterator end() const noexcept { return begin() + size(); }
};

template <class _Tp>
constexpr const _Tp *begin(initializer_list<_Tp> __ils) noexcept {
  return __ils.begin();
}

template <class _Tp>
constexpr const _Tp *end(initializer_list<_Tp> __ils) noexcept {
  return __ils.end();
}

} // end of namespace foo

#endif // INITIALIZER_LIST_H
