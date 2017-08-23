#include <stdio.h>

int main() {
    int a;
    printf("Input a Integer number and I will convert it into a floating one: ");
    scanf("%d",&a);
    float b = (float) a;
    printf("Convert %d as %.1f",a,b);
}