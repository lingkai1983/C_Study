#include <stdio.h>

int add(int a, int b){
    return a+b;
}

int main(){
    int x1 = 3;
    int x2 = 4;

    printf("%d + %d = %d\n", x1,x2, add(x1,x2));

    // create a ptr add_func and let it pointers add function
    int (*add_func) (int a, int b) = add;
    printf("The result is the same when use pointer to a function: %d\n", add_func(x1,x2));
}
