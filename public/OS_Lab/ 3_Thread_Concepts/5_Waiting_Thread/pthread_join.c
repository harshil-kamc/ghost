#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *task(void *arg)
{
    sleep(2);
    printf("Child thread completed\n");
    return NULL;
}

int main()
{
    pthread_t thread;
    pthread_create(&thread, NULL, task, NULL);
    pthread_join(thread, NULL);
    printf("Main thread continues\n");
    return 0;
}