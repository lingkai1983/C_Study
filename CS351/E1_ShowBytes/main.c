#include <stdio.h>

void showBytes(char *input, int len);

int main() {
    int a = 12345;
    char *b = (char *) &a;
    showBytes(b,sizeof(int));
    return 0;
}

void showBytes(char *input, int len){
    int i;
    for (int i=0; i < len; i++){
        printf("%p \t 0x%.2x\n",input+i, *(input+i));
    }
}