# 1 "foo.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "foo.c"
# 1 "foo.h" 1




struct foo_t{
    int s;
};
# 2 "foo.c" 2
int foo_func(int a)
{
    return a+4;
}
int main()
{
    int result;
    int r = 5;

    result = 3.1415926 * r * r;



    foo_func(2);
    return 0;
}
