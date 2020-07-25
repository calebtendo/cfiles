#include "addnum.c"
#include <stdio.h>

int main(int argc,char argv[]){
	if( argv[1] != NULL && argv[2] != NULL)
		printf("%d\n",power(argv[1],argv[2]));
	else
		puts("welcome no computational made !");
	return 0;}
	
