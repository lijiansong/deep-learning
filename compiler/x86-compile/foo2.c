int global_foo = 100;
int foo_func(int a)
{
    int b = a + 4;
    int ret = global_foo;
    return ret;
}
int main()
{
    foo_func(2);
    return 0;
}
