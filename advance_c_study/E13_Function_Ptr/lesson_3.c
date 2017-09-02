#include <string.h>
#include <stdio.h>

// a pointer to a function with two input parameters  a,b
typedef int (*specialFunc)(int a, int b);

int add(int a, int b){
	return a+b;
}

int sub(int a, int b) { return  a-b;}
int mul(int a, int b) { return  a*b;}

struct pair{
	char *name;
	specialFunc f;
};

// build a lookup table, with string name and its corresponding function name
struct pair lookup_table[3] = {
	{"add", add},
	{"sub", sub},
	{"mul", mul}
};

// look up a function based on function name
// reutrn a function pointer that points to a corresponding function
specialFunc lookup(char *name){
	int i =0;
	for (int i = 0; i < 3; i++){
		if (strcmp(name,lookup_table[i].name)==0){
			printf("input matches with function:%s\n", lookup_table[i].name);
			return lookup_table[i].f;
		}
	}

	// if can't find within look up table return null
	return NULL;
}

int main(int argc, char *argv[]){
	if (argc !=4){
		fprintf(stderr, "User needs to supply exact 3 arguments. Eg: add 3 4 \n");
		return (1);
	}

	char *name = argv[1];
	int a = atoi(argv[2]);
	int b = atoi(argv[3]);

	printf("%s %d %d\n", name,a,b );

	specialFunc f = lookup(name);

	if (f == NULL) {
		fprintf(stderr, "function name %s is not a valid one\n", name);
		printf("use one of add, sub, mul\n");
		return  1;
	}

	int result = f(a,b);
	printf("%s(%d, %d) = %d \n", name,a,b,result);
}	