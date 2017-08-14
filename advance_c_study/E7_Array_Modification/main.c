#include <stdio.h>
#include <string.h>
#include <ctype.h>

void convert(char array[]);

int main() {
    printf("Type in a line, I will convert lower to upper and blank space to underline!\n");
    char string[20];
    fgets(string,20,stdin);

    // do the converstion
    convert(string);

    printf("After Conversion: \n");
    printf("%s", string);
    return 0;
}

void convert(char array[]){
    int i = 0;
    while(array[i]){
        if (array[i] == ' ')
            array[i] = '_';
        else
            array[i] = toupper(array[i]);
        i++;
    }
}