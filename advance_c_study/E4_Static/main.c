#include <stdio.h>

int* getPrimes(){
    static int array[5] = {1,3,5,7,11}; // it must be static. o.w address of address will be lost
    return array;
}

int main() {
    int *a;
    a = getPrimes();

    int i;
    for (i =0; i < 5; i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
    return 0;
}