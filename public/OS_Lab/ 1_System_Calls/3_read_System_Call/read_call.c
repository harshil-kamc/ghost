#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    int fd;
    char buffer[100];
    int n;

    fd = open("sample.txt", O_RDONLY);
    if (fd == -1)
    {
        return 1;
    }
    n = read(fd, buffer, sizeof(buffer) - 1);
    if (n == -1)
    {
        printf("File reading failed\n");
    }
    else
    {
        buffer[n] = '\0';
        printf("Data in the file:\n");
        printf("%s", buffer);
    }
    close(fd);
    return 0;
}