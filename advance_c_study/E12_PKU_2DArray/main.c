#include <stdio.h>
#include <mem.h>

struct student {
        char name[20];
        int age;
        double height;
};

int main() {
    int a[4] = {1,2,3,4};

//    printf("address of a is: %p\n",a);
//    printf("address of a+1 is : %p\n",a+1);
//    printf("address of &a+1 is %p\n",&a+1);

    int b[2][4] = {
            {1,2,3,4},
            {5,6,7,8},

    };

    printf("Address of b is: %p\n",b);
    printf("Address of b+1 is: %p\n",b+1);
    printf("Address of &b+1 is: %p\n",&b+1);

    printf("----------------\n");
    printf("Address of b[0] is: %p\n",b);
    printf("Address of b[0]+1 is: %p\n",b[0]+1);
    printf("Address of &b[0]+1 is: %p\n",&b[0]+1);

    char name[10];

    strcpy(name,"Lingkai Zuo");

    int i =0;
    int j = 0;
    for (i = 0; name[i]!='\0';i++){
        printf("*%c* \n",name[i]);
    }

    struct student s1, s2;
    return 0;
}