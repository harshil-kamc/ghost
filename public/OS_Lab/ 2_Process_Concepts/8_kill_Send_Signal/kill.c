#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>

int main()
{
    pid_t pid;
    pid = fork();
    if (pid == 0)
    {
        printf("Child process is running\n");
        while (1)
        {
            sleep(1);
        }
    }
    else
    {
        sleep(2);
        kill(pid, SIGTERM);
        wait(NULL);
        printf("Child process terminated\n");
    }
    return 0;
}