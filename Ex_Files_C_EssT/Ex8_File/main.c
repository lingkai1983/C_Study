/*
 ============================================================================
 Name        : 13_03.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Use appropriate file access modes, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//Function prototypes
void copyFromSourceToDestination(void);
void appendCopyrightNotice(void);

int main(void) {

    //copyFromSourceToDestination();
    appendCopyrightNotice();

    return EXIT_SUCCESS;
}

void copyFromSourceToDestination(void){
    FILE *srcFile, *destFile;
    srcFile = fopen("C:/Github/C_Study/Ex_Files_C_EssT/Exercise_Files/sourceFile","r");
    destFile = fopen("C:/Github/destinationFile","w");
    int ch;
    ch = getc(srcFile);

    while (ch!=EOF){
        putc(ch,destFile);
        putchar(ch);
        ch = getc(srcFile);
    }
    fclose(srcFile);
    fclose(destFile);
}

void appendCopyrightNotice(void) {
    FILE *fp;
    fp = fopen("C:/Github/destinationFile","a"); // append mode
    fprintf(fp,"\n\nCopywrite @Lingkai Zuo");

    fclose(fp);
}