#include <stdio.h>

int main() {
    printf("Input a temperature in Celcius: ");
    float c;
    scanf ("%f", &c);

    float f;
    float k;
    f = c*9/5 + 32;
    k = c + 273;

    printf("It's %.2f in faren. \n", f);
    printf("It's %.1f in Keivin. \n",k);

}