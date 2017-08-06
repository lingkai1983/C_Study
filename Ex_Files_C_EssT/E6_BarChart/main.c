#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define NUMBER_OF_ROW 10

void printArray(int array[]){
    for (int i =0; i < NUMBER_OF_ROW; i++){
        printf("Array[%d]=%d\n",i,array[i]);
    }
}

void initArray(int array[]){
    srand(time(NULL));
    for (int i = 0; i <NUMBER_OF_ROW;i++)
        array[i] = rand() %50;
}

void printBar(int array[]){
    int barSize = 0;
    int arraySize = NUMBER_OF_ROW;
    for (int i =0; i < arraySize; i++) {
        barSize = array[i];
        for (int j =0; j < barSize; j++){
            printf("*");
        }
        // after print a row of "*", switch a line
        printf("\n");
    }
}

int main() {
    int dataSet[NUMBER_OF_ROW] = {};
    printArray(dataSet);
    initArray(dataSet);
    printf("====================\n");
    printArray(dataSet);
    printf("^^^^^^^^^^^^^\n");
    printBar(dataSet);
    int a = sizeof(dataSet)/ sizeof(int);
    printf("%d",a);
    return 0;
}