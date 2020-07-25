#include <stdio.h>

int main(int argc, int *argv)
{
	int a[4];
	int b[] = {2,5,6,9};

	a[0] = 3;
	a[1] = 2;
	a[2] = 7;
	a[3] = 9;

	printf("a values are : %d,%d,%d,%d" ,a[0],a[1],a[2],a[3]);
	printf("\nb values are : %d,%d,%d,%d",b[0],b[1],b[2],b[3]);

	return 0;
}
