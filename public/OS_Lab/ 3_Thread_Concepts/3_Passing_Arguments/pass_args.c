#include <stdio.h>
#include <pthread.h>

void *task(void *arg)
{
    int number = *(int *)arg;
    printf("Number received by thread: %d\n", number);
    return NULL;
}

int main()
{
    pthread_t thread;
    int number = 10;
    pthread_create(&thread, NULL, task, &number);
    pthread_join(thread, NULL);
    return 0;
}