#include <stdio.h>

int main()
{
	int x;

	for(x=1; x<21; x++)
		printf("%d\n",x);

    printf("-------------\n");

	for(x=2; x<21; x=x+2)
		printf("%d\n",x);

    printf("-------------\n");
    for (x = 10; x >=1; x--){
        printf("%d\n",x);
    }

	return(0);
}

