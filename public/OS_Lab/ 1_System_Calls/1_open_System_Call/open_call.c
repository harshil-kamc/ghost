#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    int fd;
    fd = open("sample.txt", O_CREAT | O_RDWR, 0644);
    if (fd == -1)
    {
        printf("File opening failed\n");
    }
    else
    {
        printf("File opened successfully\n");
        printf("File Descriptor: %d\n", fd);
    }
    close(fd);
    return 0;
}