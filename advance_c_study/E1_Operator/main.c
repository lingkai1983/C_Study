#include <stdio.h>

int main() {
    float f;
    float r1,r2;
    printf("Input some number: ");
    scanf("%f", &f);

    r1 = f*5;
    r2 = f/3;

    printf("Inputx5=%.1f\n",r1);
    printf("Input/3=%.2f\n",r2);
    return 0;
}