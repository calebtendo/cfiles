#include <stdio.h>
#include <stdbool.h>
int main(int argc, int *argv)
{
	int n=0;
	int *k;
	printf("%d",k);
	
	bool goog;

	while(1)
	{
		printf("%d\t -- %d\t",k,n);
		goog = n == 10 ? 1 : 0 ;
		if(goog)
			printf("\n");
		++n;
		++k;
		if(n == 87)
			break;
	}
	return 0;
}

