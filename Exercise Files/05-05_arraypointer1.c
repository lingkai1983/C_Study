#include <stdio.h>

int main()
{
	int array[] = { 11, 13, 17, 19 };
	int x;
	int *aPtr;

	aPtr = array;
	*(aPtr+2) = 0;//assign third value of array to zero.

	for(x=0;x<4;x++)
	{
		printf("Element %d: %d\n",x+1,array[x]);
	}

	return(0);
}

