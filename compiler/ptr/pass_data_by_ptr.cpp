#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main()
{
    int n1 = 5;
    int n2 = 10;
    swap(&n1, &n2);
    return 0;
}
