#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    pid_t pid;
    pid = fork();
    if (pid == 0)
    {
        printf("Child process is running\n");
        sleep(2);
        printf("Child process completed\n");
    }
    else
    {
        wait(NULL);
        printf("Parent process continues\n");
    }
    return 0;
}