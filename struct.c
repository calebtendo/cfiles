#include <stdio.h>

int main(int argc, char *argv[])
{
	struct{
		int len;
		int wid;
		int area;
	}rect;

	rect.len = 4;
	rect.wid = 8;
	rect.area = rect.len * rect.wid;
	printf("Rectanlge details:\nLength = %d\nWidth = %d\nArea  = %d",rect.len,rect.wid,rect.area);

	return 0;
}
