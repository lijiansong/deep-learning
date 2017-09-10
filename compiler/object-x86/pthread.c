#include <stdio.h>
#include <pthread.h>
int pthread_create(pthread_t *thread, 
                   const pthread_attr_t *attr,
                   void *(*start_routine) (void *), 
                   void *arg) __attribute__ ((weak));
int main()
{
    if( pthread_create )
    {
        printf( "multi-thread version!\n" );
        //multi_thread();
    }
    else
    {
        printf( "single thread version!\n" );
        //single_thread()
    }
    return 0;
}
