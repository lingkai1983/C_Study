#include <stdio.h>

void evaluate(int x);

int main()
{
	int i;

	printf("Type an integer value: ");
	scanf("%d",&i);
	evaluate(i);

	return(0);
}

void evaluate(int x)
{
	/* insert code here */
	if (x == 10)
        printf("Input value is equal to 10.\n");
    else if (x < 10)
        printf("Input value is less than to 10.\n");
    else
        printf("Input value is larger than 10.\n");
}

