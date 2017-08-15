#include <stdio.h>

int main()
{
	int f[5] = { 13, 21, 34, 55, 89 };
	int x;

	for(x=0;x<5;x++)
		printf("%d\n",f[x]);

	int a[2][3] = { 1,2,3,4,5,6};

	int i,j;
	for (i = 0; i <2; i++){
        for(j=0; j<3; j++){
            printf(" a[%d][%d]=%d ",i,j,a[i][j]);
        }
        printf("\n");
	}

	i = 0;
	int *ptr;
	ptr = f;
	for (i=0; i<6; i++){
        printf("%p : %d\n",ptr,*ptr);
        ptr++;
	}

	return(0);
}

