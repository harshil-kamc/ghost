#include <stdio.h>
#include <pthread.h>

void *task(void *arg)
{
    int number = *(int *)arg;
    printf("Thread %d is running\n", number);
    return NULL;
}

int main()
{
    pthread_t threads[3];
    int numbers[3] = {1, 2, 3};
    pthread_create(&threads[0], NULL, task, &numbers[0]);
    pthread_create(&threads[1], NULL, task, &numbers[1]);
    pthread_create(&threads[2], NULL, task, &numbers[2]);
    pthread_join(threads[0], NULL);
    pthread_join(threads[1], NULL);
    pthread_join(threads[2], NULL);
    printf("All threads completed\n");
    return 0;
}