#include "vectorize.h"
#include <iostream>
using namespace vectorize;

void add2_byhand(unsigned n, const float *src1, const float *src2, float *dst) {
  for (; n >= 4; n -= 4, src1 += 4, src2 += 4, dst += 4) {
    _mm_store_ps(dst, _mm_add_ps(_mm_load_ps(src1), _mm_load_ps(src2)));
  }
  for (; n; --n, ++src1, ++src2, ++dst) {
    *dst = *src1 + *src2;
  }
}

void add2_vectorize(unsigned n, const float *src1, const float *src2,
                    float *dst) {
  apply2(n, src1, src2, dst, _x + _y);
}

void show(unsigned n, float *dst) {
  for (unsigned i = 0; i < n; ++i) {
    std::cout << dst[i] << ' ';
  }
  std::cout << std::endl;
}

void gen(unsigned n, float *src1, float *src2) {
  for (unsigned i = 0; i < n; ++i) {
    src1[i] = 1.f;
    src2[i] = 2.f;
  }
}

int main() {
  float src1[128];
  float src2[128];
  gen(128, src1, src2);
  float dst1[128];
  add2_byhand(128, src1, src2, dst1);
  show(128, dst1);

  std::cout << "\n--------------------------------\n";

  float src3[128];
  float src4[128];
  gen(128, src3, src4);
  float dst2[128];
  add2_vectorize(128, src3, src4, dst2);
  show(128, dst2);
  return 0;
}
