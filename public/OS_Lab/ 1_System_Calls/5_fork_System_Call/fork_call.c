#include <stdio.h>
#include <unistd.h>

int main()
{
    pid_t pid;
    pid = fork();
    if (pid < 0)
    {
        printf("Process creation failed\n");
    }
    else if (pid == 0)
    {
        printf("This is the child process\n");
    }
    else
    {
        printf("This is the parent process\n");
    }
    return 0;
}