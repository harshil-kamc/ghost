#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>
sem_t mutex, wrt;
int read_count = 0;
void* reader(void* arg) {
    sem_wait(&mutex);
    read_count++;
    if(read_count == 1) sem_wait(&wrt);
    sem_post(&mutex);
    printf("Reader %d is reading\n", *(int*)arg);
    sleep(1);
    sem_wait(&mutex);
    read_count--;
    if(read_count == 0) sem_post(&wrt);
    sem_post(&mutex);
    return NULL;
}
void* writer(void* arg) {
    sem_wait(&wrt);
    printf("Writer %d is writing\n", *(int*)arg);
    sleep(2);
    sem_post(&wrt);
    return NULL;
}
int main() {
    pthread_t r[3], w[2];
    int r_ids[3] = {1,2,3}, w_ids[2] = {1,2};
    sem_init(&mutex, 0, 1); sem_init(&wrt, 0, 1);
    for(int i=0; i<3; i++) pthread_create(&r[i], NULL, reader, &r_ids[i]);
    for(int i=0; i<2; i++) pthread_create(&w[i], NULL, writer, &w_ids[i]);
    for(int i=0; i<3; i++) pthread_join(r[i], NULL);
    for(int i=0; i<2; i++) pthread_join(w[i], NULL);
    return 0;
}