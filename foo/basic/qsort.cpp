#include <stdio.h>
#include <stdlib.h>
void qsort(int a[], int start, int end) {
    int i = start;
    int j = end;
    int tmp;
    if(start < end) {
        tmp = a[start];
        while(i!=j) {
            while(j>i && a[j]>=tmp) --j;
            a[i] = a[j];
            while(j>i && a[i]<tmp) ++i;
            a[j] = a[i];
        }
        a[i] = tmp;
        qsort(a, start, i-1);
        qsort(a, i+1, end);
    }
}

int main(int argc, const char* argv[]) {
    int a[8] = {3,2,4,7,10,5,7,1};
    int n = sizeof(a)/sizeof(a[0]);
    qsort(a, 0, n-1);
    for(int i=0; i<n; ++i) printf("%d ", a[i]);
    return 0;
}
