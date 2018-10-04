#ifndef _CRTP_ANIMAL_H_
#define _CRTP_ANIMAL_H_

#pragma once

#include <iostream>
#include <string>

namespace crtp {

template <typename Derived> class Animal {

  Derived &get_as_derived() { return static_cast<Derived &>(*this); }
  const Derived &get_as_derived() const {
    return static_cast<const Derived &>(*this);
  }

public:
  std::string speak() const { return get_as_derived().do_speak(); }
};

template <typename T> void listen_to(const Animal<T> &animal) {
  std::cout << animal.speak() << '\n';
}

} // namespace crtp

#endif // _CRTP_ANIMAL_H_
