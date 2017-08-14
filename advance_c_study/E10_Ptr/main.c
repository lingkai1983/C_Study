#include <stdio.h>

int main() {
    int a;
    int* ptr;

    ptr = &a;
    *ptr = 10;

    printf("%d \n",a);

    (*ptr)++;
    printf("%d \n",a);
}