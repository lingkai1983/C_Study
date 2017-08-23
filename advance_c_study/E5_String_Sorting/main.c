#include <stdio.h>
#include <string.h>

int main() {
    char stringArray[25];
    printf("Please input a String!\n");
    fgets(stringArray,25,stdin);
    printf("Input is %s and length is %d\n", stringArray, strlen(stringArray));

    int length = strlen(stringArray);
    int i,j;
    char temp;

    for (i = length-1; i>=1; i--){
        for(j=i-1; j>=0; j--){
            if (stringArray[j]>stringArray[i]){
               temp = stringArray[j];
                stringArray[j] = stringArray[i];
                stringArray[i] = temp;
            }
        }
    }

    printf("After Sorting is %s", stringArray);



    return 0;
}