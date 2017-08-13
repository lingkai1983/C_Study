#include <stdio.h>

int main(int argc, int* argv[]) {
    if (argc == 1) {
        printf("Error no single has been detected\n");
        return (1);
    } else {
        int x = 0;
        for (x=0; x<argc;x++){
            printf("arg[%2d] is %s\n", x+1, argv[x]);
        }
    }
    return 0;
}