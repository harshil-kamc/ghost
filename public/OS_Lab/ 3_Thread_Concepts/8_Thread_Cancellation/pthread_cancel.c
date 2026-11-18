#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *task(void *arg)
{
    while (1)
    {
        printf("Thread is running\n");
        sleep(1);
    }
    return NULL;
}

int main()
{
    pthread_t thread;
    pthread_create(&thread, NULL, task, NULL);
    sleep(3);
    pthread_cancel(thread);
    pthread_join(thread, NULL);
    printf("Thread cancelled\n");
    return 0;
}