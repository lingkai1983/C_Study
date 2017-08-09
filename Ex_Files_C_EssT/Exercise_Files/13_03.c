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

	copyFromSourceToDestination();
	appendCopyrightNotice();

	return EXIT_SUCCESS;
}

//---- FUNCTION DEFINITIONS ----
void copyFromSourceToDestination(){
	int ch;
	FILE *src, *dest;  // pointers to a file type
	src = fopen("sourceFile","r"); // Change to match your path
	dest = fopen("destinationFile","w"); // Change to match your path
	ch = getc(src);
	while (ch != EOF){   // keep looping until EOF of source file
		putc(ch, dest);   // write to destination file
		// putchar(ch);
		ch = getc(src);
	}
	fclose(src);
	fclose(dest);
}

void appendCopyrightNotice(){
	FILE *fp;  // pointer to a file type
	// open the destination file to append copyright notice
	fp = fopen("C:/Github/C_Study/Ex_Files_C_EssT/Exercise_Files/destinationFile", "a"); // Change to match your path
	fprintf(fp,"\n\nCopyright 2017, XYZ Company");

	fclose(fp);
}

