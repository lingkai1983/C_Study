#include <stdio.h>

typedef int (*pair_func) (int a, int b);

int add(int a, int b){
	return a+b;
}

int sub(int a, int b){
	return a-b;
}

int mul(int a, int b){
	return  a*b;
}

void blend(int *a, int *b, int len, pair_func f){
	int i = 0;
	for (int i = 0; i < len; i++){
		printf("%d: %d\n",i, f(a[i],b[i]) );
	}
}

int main(){
	int a[] = {1,2,3,4};
	int b[] = {5,6,7,8};

	int len = sizeof(a)/sizeof(int);
	printf("Length is %d\n",len);

	printf("add:\n");
	blend(a,b,len,add);

	printf("sub:\n");
	blend(a,b,len,sub);

	printf("mul:\n");
	blend(a,b,len,mul);
}