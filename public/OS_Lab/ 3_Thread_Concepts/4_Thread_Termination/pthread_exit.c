#include <stdio.h>
#include <pthread.h>

void *task(void *arg)
{
    printf("Thread is running\n");
    pthread_exit(NULL);
}

int main()
{
    pthread_t thread;
    pthread_create(&thread, NULL, task, NULL);
    pthread_join(thread, NULL);
    printf("Main thread completed\n");
    return 0;
}