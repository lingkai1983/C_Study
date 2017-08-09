#include <stdio.h>
#include <string.h>
#include <malloc.h>

struct Person {
    char firstName[20];
    char lastName[20];
    int age;
    float height;
};

void printInfo(struct Person aPerson);

int main() {
    struct Person myself;
    myself.age = 34;
    myself.height = 1.70;
    strcpy(myself.firstName,"Lingkai");
    strcpy(myself.lastName,"Zuo");
    printInfo(myself);

    printf("----------------\n");

    struct Person *wife = malloc(sizeof(struct Person));
    wife->age = 20;
    wife->height = 1.65;
    strcpy(wife->firstName,"Ning");
    strcpy(wife->lastName,"Liu");
    printInfo(*wife);

}

void printInfo(struct Person aPerson){
    printf("First Name is: %s\n", aPerson.firstName);
    printf("Last Name is: %s\n", aPerson.lastName);
    printf("Age is: %d\n", aPerson.age);
    printf("Height is %.2f\n", aPerson.height);
}