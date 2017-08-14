#include <stdio.h>
#include <malloc.h>
#include <mem.h>

#define NAME_SIZE 20

struct Person{
       char name[NAME_SIZE];
       int age;
};

void setPerson(struct Person *aPerson, char name[], int age);
void display(struct Person *aPerson);

int main() {
    char name[NAME_SIZE];
    int  age;
    printf("Tell me your name: ");
    fgets(name,NAME_SIZE,stdin);
    printf("Tell me your age: ");
    scanf("%d",&age);

    // allocate a Person
    struct Person *myself = (struct Person*) malloc (sizeof(struct Person));

    setPerson(myself,name,age);

    display(myself);
    return 0;
}

void setPerson(struct Person *aPerson, char name[], int age){
    aPerson -> age = age;
    strcpy(aPerson->name, name);
}

void display(struct Person *aPerson){
    printf("The Person's name is %s\n",aPerson->name);
    printf("The Person's age is: %d\n", aPerson->age);
}