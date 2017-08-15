#include <stdio.h>

int main() {
    char string[20];
    printf("Enter Something: \n");
    fgets(string,20,stdin);

    char *ptr = string;

    int size = sizeof(string)/sizeof(char);

    printf("Input is %s\n",string);
    printf("Input size is %d \n",size);


    while (*ptr){
        putchar(*ptr);
        ptr++;
    }

    return 0;
}