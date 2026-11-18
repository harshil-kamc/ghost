#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

void* demo(void* args)
{
    printf("Thread executed...Pid=%d\n",getpid());
    printf("Thread ID=%lu\n",(unsigned long)pthread_self());
    return NULL;
}

int main()
{
    pthread_t tid;
    printf("Main starts...Pid=%d\n",getpid());
    pthread_create(&tid,NULL,demo,NULL);
    pthread_join(tid,NULL);
    printf("Main ends\n");
    return 0;
}