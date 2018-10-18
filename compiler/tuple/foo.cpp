#include <iostream>

#define LOG()                                                                  \
  { std::cout << __PRETTY_FUNCTION__ << " at line: " << __LINE__ << std::endl; }

template <typename First, typename... Rest>
struct tuple : public tuple<Rest...> {
  tuple(First first, Rest... rest) : tuple<Rest...>(rest...), first(first) {}
  First first;
};

template <typename First> struct tuple<First> {
  tuple(First first) : first(first) {}
  First first;
};

template <int index, typename First, typename... Rest> struct get_impl {
  static auto value(const tuple<First, Rest...> *t)
      -> decltype(get_impl<index - 1, Rest...>::value(t)) {
    LOG();
    return get_impl<index - 1, Rest...>::value(t);
  }
};

template <typename First, typename... Rest> struct get_impl<0, First, Rest...> {
  static First value(const tuple<First, Rest...> *t) { return t->first; }
};

template <int index, typename First, typename... Rest>
auto get(const tuple<First, Rest...> &t)
    -> decltype(get_impl<index, First, Rest...>::value(&t)) {
  LOG();
  return get_impl<index, First, Rest...>::value(&t);
}

int main() {
  tuple<int, int, double> c(3, 5, 1.1);
  std::cout << get<1>(c) << std::endl;
}
