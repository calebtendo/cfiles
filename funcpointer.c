#include <stdio.h>

int add_numbers(int a, int b)
{
	return a+b;
}

int main(int arg, char *argv[])
{
	int result;


	int (*myfunc_ptr)(int,int);

	myfunc_ptr =&add_numbers;


	result = myfunc_ptr(3,7);

	printf("result = %d\n", result);
	return 0;
}
