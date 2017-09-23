/*
 * 1. 返回未初始化的指针
 * 2. 返回指向无效地址的指针
 * 3. 返回局部变量的指针
 * 4. 返回指针但是没有释放内存
 * */
#include <stdio.h>
#include <stdlib.h>

int* allocate_local_array(int size, int value)
{
    int array[size];
    for(int i=0; i<size; ++i)  array[i] = value;
    return array;
}
int* allocate_array(int size, int value)
{
    int *array = (int*)malloc(size*sizeof(int));
    for(int i=0; i<size; ++i)  array[i] = value;
    return array;
}
int main()
{
    int *vector = allocate_array(5, 97);
    for(int i=0; i<5; ++i)  printf("%d\n", vector[i]);
    //
    free(vector);
    int *vector_local = allocate_local_array(5, 97);
    for(int i=0; i<5; ++i)  printf("%d\n", vector_local[i]);

    return 0;
}
