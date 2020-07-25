#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char str[24] = "First string";
	char *ptr = "Second strng";

	printf("str = %s\nptr = %s\n",str,ptr);

	ptr++;
	printf("ptr = %s\n",ptr);
	return 0;
}
