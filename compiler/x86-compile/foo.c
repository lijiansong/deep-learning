#include "foo.h"
int foo_func(int a)
{
    return a+4;
}
int main()
{
    int result;
    int r = 5;
#ifdef AREA
    result = PI * r * r;
#else
    result = PI * r * 2;
#endif
    foo_func(2);
    return 0;
}
