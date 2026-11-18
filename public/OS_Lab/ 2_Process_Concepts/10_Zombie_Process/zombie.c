#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    pid_t pid;
    pid = fork();
    if (pid == 0)
    {
        printf("Child process terminating\n");
        exit(0);
    }
    else
    {
        printf("Parent process is running\n");
        sleep(10);
    }
    return 0;
}