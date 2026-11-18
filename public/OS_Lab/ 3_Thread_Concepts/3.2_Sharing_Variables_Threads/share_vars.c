#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

int a,b;

void* add(void* args)
{
    printf("Addition=%d\n",(a+b));
    return NULL;
}

void* sub(void* args)
{
    printf("Subtraction=%d\n",(a-b));
    return NULL;
}

void main()
{
    pthread_t tid1,tid2;
    printf("Main starts...Pid=%d\n",getpid());
    printf("Enter values for a,b:");
    scanf("%d%d",&a,&b);
    pthread_create(&tid1,NULL,add,NULL);
    pthread_create(&tid2,NULL,sub,NULL);
    pthread_join(tid1,NULL);
    pthread_join(tid2,NULL);
    printf("Main ends\n");
}