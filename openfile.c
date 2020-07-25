#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

int main()
{
    int fd;
    fd = open("myfile.txt", O_CREAT | O_WRONLY, 0600);

    if(fd == -1){
        printf("Failed to create and open the file.\n");

    }

    write(fd, "Hello World!\n",13);

    close(fd);
    return 0;
    
}