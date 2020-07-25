#include <stdio.h>
typedef int INT32;
typedef char MYCHAR;

typedef struct mystruct_t{
	int a;
	int b;
}MYSTRX;


int main(int argc, char *argv[]){
	INT32 i;
	MYCHAR mystr[20] = "Hello Ject";

	MYSTRX gold;

	printf("i = %d\n",i);
	printf("mystr = %s\n", mystr);

	gold.a =2;
	gold.b =4;
	
	printf("gold.a = %d\n", gold.a);
	printf("gold.b = %d\n", gold.b);

	return 0;}
