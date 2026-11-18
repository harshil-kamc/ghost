#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    int fd;
    char message[] = "Hello, Operating System!\n";
    fd = open("sample.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (fd == -1)
    {
        return 1;
    }
    write(fd, message, sizeof(message) - 1);
    printf("Data written successfully\n");
    close(fd);
    return 0;
}