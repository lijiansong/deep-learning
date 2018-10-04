#ifndef _RUNTIME_ANIMAL_H_
#define _RUNTIME_ANIMAL_H_

#pragma once

#include <iostream>
#include <string>

namespace runtime {

class Animal {
public:
  virtual ~Animal() = default;

  std::string speak() const { return do_speak(); }

private:
  virtual std::string do_speak() const = 0;
};

inline void listen_to(const Animal &animal) {
  std::cout << animal.speak() << '\n';
}

} // namespace runtime

#endif // _RUNTIME_ANIMAL_H_
