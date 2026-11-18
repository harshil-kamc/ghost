#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    int fd;
    fd = open("sample.txt", O_RDONLY);
    if (fd == -1)
    {
        printf("File opening failed\n");
        return 1;
    }
    printf("File opened successfully\n");
    close(fd);
    printf("File closed successfully\n");
    return 0;
}