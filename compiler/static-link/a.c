extern int shared;
//extern void swap( int*, int*);
int main()
{
    int a = 100;
    swap( &a, &shared );
    return 0;
}
