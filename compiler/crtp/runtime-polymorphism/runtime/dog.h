#ifndef _RUNTIME_DOG_H_
#define _RUNTIME_DOG_H_

#pragma once

#include "animal.h"

namespace runtime {

class Dog : public Animal {
  std::string do_speak() const override;
};

} // namespace runtime

#endif // _RUNTIME_DOG_H_
