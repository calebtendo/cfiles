#include <stdio.h>

int main(int argc, int *argv)
{
	int n;
	int *k;

	n=25;
	k =&n;

	printf("n = %d\nk = %x\n*k = %d\n",n,k,*k);

	return 0;
}

