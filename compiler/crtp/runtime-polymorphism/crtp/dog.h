#ifndef _CRTP_DOG_H_
#define _CRTP_DOG_H_

#pragma once

#include "animal.h"

namespace crtp {

class Dog : public Animal<Dog> {
  std::string do_speak() const;

  friend class Animal<Dog>;
};

} // namespace crtp

#endif // _CRTP_DOG_H_
