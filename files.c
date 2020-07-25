#include <stdio.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

int main(int argc,char argv[]){
	int fd,file;
	char buf[14];
	fd = open("myfile.txt",O_CREAT | O_WRONLY, 0600);
	if(fd == -1){
		printf("Failed to create and open the file.\n");
		exit(1);}


	write(fd, "Hello Ject\n",13);
	

	close(fd);

	file = open("secondFile.txt",O_RDONLY);

	if(fd == -1){
		printf("Failed to open and read the file.\n");
		exit(1);}

	read(file, buf,13);
	buf[13] = '\0';

	close(file);
	
	printf("buf: %s\n",buf);

	return 0;}
