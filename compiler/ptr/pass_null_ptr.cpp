#include <stdio.h>
#include <stdlib.h>

int* allocate_array(int *array, int size, int value)
{
    if(array != NULL)
    {
        for(int i=0; i<size; ++i)  array[i] = value;
    }
    return array;
}
int main()
{
    int *vector = (int*)malloc(5*sizeof(int));
    allocate_array(vector, 5, 97);
    for(int i=0; i<5; ++i)  printf("%d\n", vector[i]);
    free(vector);

    return 0;
}
