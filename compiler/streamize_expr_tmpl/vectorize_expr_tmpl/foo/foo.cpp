#include "vec.h"
#include <iostream>
#include <random>

#define EPS 1e-3
using namespace cn;

void add2(unsigned n, const float *src1, const float *src2, float *dst) {
  for (; n >= 4; n -= 4, src1 += 4, src2 += 4, dst += 4) {
    _mm_store_ps(dst, _mm_add_ps(_mm_load_ps(src1), _mm_load_ps(src2)));
  }
  for (; n; --n, ++src1, ++src2, ++dst) {
    *dst = *src1 + *src2;
  }
}

void add2_byhand(unsigned n, const float *src1, const float *src2, float *dst) {
  for (; n >= 1024; n -= 1024, src1 += 1024, src2 += 1024, dst += 1024) {
    __vec_fstore(dst, __vec_fadd(__vec_fload(src1), __vec_fload(src2)));
  }
  for (; n; --n, ++src1, ++src2, ++dst) {
    *dst = *src1 + *src2;
  }
}

void add2_vectorize(unsigned n, const float *src1, const float *src2, float *dst) {
  apply2(n, src1, src2, dst, _x + _y);
}

void show(unsigned n, float *dst) {
  for (unsigned i = 0; i < n; ++i) {
    std::cout << dst[i] << ' ';
  }
  std::cout << std::endl;
}

void gen(unsigned n, float *src1, float *src2) {
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_real_distribution<> dist(-100, 100);
  for (unsigned i = 0; i < n; ++i) {
    src1[i] = dist(gen);
    src2[i] = dist(gen);
  }
}

void foo(float *src1, float *src2, float *dst) {
  __vf1024 a(src1), b(src2);
  __vf1024 c = __vec_fadd(a, b);
  dst = c._data;
  show(1024, c._data);
}

bool pass(unsigned n, float *d1, float *d2) {
  bool flag = true;
  for (unsigned i = 0; i < n; ++i) {
    if (d1[i] - d2[i] > EPS) {
      flag = false;
      break;
    }
  }
  return flag;
}

int main() {
  float src1[1024];
  float src2[1024];
  gen(1024, src1, src2);

  float dst1[1024];
  add2_byhand(1024, src1, src2, dst1);
  //show(1024, dst1);

  std::cout << "\n--------------------------------\n";

  float dst2[1024];
  add2_vectorize(1024, src1, src2, dst2);
  //show(1024, dst2);
  if (pass(1024, dst1, dst2)) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
  float dst3[1024];
  foo(src1, src2, dst3);
  float dst4[1024];
  add2(1024, src1, src2, dst4);
  show(1024, dst4);
  if (pass(1024, dst3, dst4)) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
  return 0;
}
