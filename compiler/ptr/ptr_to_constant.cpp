#include <stdio.h>
#include <stdlib.h>
void pass_addr_of_constant(const int *a, int *b)
{
    *b = *a;
}
int main()
{
    const int n1 = 100;
    int n2 = 10;
    pass_addr_of_constant(&n1, &n2);
    printf("%d\n", n2);
    return 0;
}
