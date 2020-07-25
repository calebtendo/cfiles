#include <stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<dirent.h>

int main(int argc, char *argv[]){
	struct dirent *sd;
	DIR *dir;

	dir = opendir(".");//opening current directory
	if(dir == NULL){
		printf("Error! Unable to open directory.\n");
		exit(1);
	}
	
	while((sd = readdir(dir) != NULL){
			printf(">> %s\n",sd->name);}
	closedir(dir);

	return 0;
}
