#include <stdio.h>

int main() {
    float inCenti;
    printf("Please input a length in centimeter and I will convert it into feet and inches! ");
    scanf("%f", &inCenti);

    int feet;
    float convertInche;
    float residual;


//    convertFeet = inCenti / 30.48;
    convertInche = inCenti/2.54;
    feet = convertInche / 12;
    residual = convertInche - feet*12;



    int outCenti = (int) inCenti;
 //   printf("The input is %d. \n", outCenti);
    printf("It's equal to %d feet(s). \n", feet);
    printf("It's equal to %.4f inch(es). \n", residual);

    return 0;
}