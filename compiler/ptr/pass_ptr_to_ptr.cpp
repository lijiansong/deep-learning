/*
 * 如果想修改原指针而不是指针的副本，就需要传递指针的指针;
 * allocate_array的地一个参数以指针的指针的形式传递，已经修改了vector的地址
 * pass_one_ptr_allocate_array将指针vec传递给了array,并没有将存储在vec中的值传递给array,后期对array的修改，并不影响vec
 * */
#include <stdio.h>
#include <stdlib.h>

void allocate_array(int **array, int size, int value)
{
    *array = (int*)malloc(size*sizeof(int));
    if(*array != NULL)
    {
        for(int i=0; i<size; ++i)  *(*array+i) = value;
    }
}

void pass_one_ptr_allocate_array(int *array, int size, int value)
{
    array = (int*)malloc(size*sizeof(int));
    if(array != NULL)
    {
        for(int i=0; i<size; ++i)  array[i] = value;
    }
}

int main()
{
    int *vector = NULL;
    printf("%p\n", vector);
    allocate_array(&vector, 5, 97);
    printf("%p\n", vector);
    for(int i=0; i<5; ++i)  printf("%d\n", vector[i]);
    free(vector);
    int *vec = NULL;
    pass_one_ptr_allocate_array(vec, 5, 97);
    printf("%p\n", vec);

    return 0;
}
