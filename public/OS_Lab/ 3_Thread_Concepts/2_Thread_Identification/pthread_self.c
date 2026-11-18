#include <stdio.h>
#include <pthread.h>

void *task(void *arg)
{
    printf("Thread ID: %lu\n", pthread_self());
    return NULL;
}

int main()
{
    pthread_t thread;
    pthread_create(&thread, NULL, task, NULL);
    pthread_join(thread, NULL);
    return 0;
}