#include <stdio.h>

void recursivePrint(int lower, int upper);

int main() {
    int lowerBound, upperBound;
    printf("Input the lower limit:  ");
    scanf("%d", &lowerBound);

    printf("Input the upper limit:  ");
    scanf("%d", &upperBound);

    if (lowerBound > upperBound)
        printf("Input error");
    else
        recursivePrint(lowerBound,upperBound);

    return 0;
}

void recursivePrint(int lower, int upper){
    if (lower == upper) {
        printf("%d\n", lower);
    } else {
        printf("%d\n",lower);
        recursivePrint(lower+1,upper);
    }
}