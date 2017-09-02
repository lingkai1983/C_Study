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

    // we can only typedef a new type plus_func which is a pointer to 
    // the add function
    typedef int (*plus_func) (int a, int b);
    plus_func p;
    p = add;
    printf("use the typedef plus_func.. p(3,4):%d \n", p(3,4));
}
