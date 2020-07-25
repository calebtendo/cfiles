#include <stdio.h>

int addnumbers(int a, int b)
{
	return a+b;
}

#define a
#define b

#define power(a,b) b==0? 0: (b == 1? a : a*power(a,b-1))
