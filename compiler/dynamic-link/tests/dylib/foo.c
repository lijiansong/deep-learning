#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
  void *handle = dlopen("libadd.dylib", RTLD_LAZY);
  int *addr = dlsym(handle, "add");
  printf("address of \"add\": 0x%x\n", addr);
  dlclose(handle);
  return 0;
}
