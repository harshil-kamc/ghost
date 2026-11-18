#include<stdio.h>
#include<pthread.h>

int a,b;
pthread_t tid[3];

void* demo(void* args)
{
    pthread_t temp;
    temp=pthread_self();

    if(pthread_equal(tid[0],temp))
    {
        printf("Thread-0 matched..sum=%d\n",a+b);
    }
    else if(pthread_equal(tid[1],temp))
    {
        printf("Thread-1 matched..subtract=%d\n",a-b);
    }
    else
    {
        printf("Thread-2 matched..product=%d\n",a*b);
    }
    return NULL;
}

int main()
{
    int i;
    printf("Enter the values of a,b:");
    scanf("%d%d",&a,&b);

    for(i=0;i<3;i++)
        pthread_create(&tid[i],NULL,demo,NULL);

    for(i=0;i<3;i++)
        pthread_join(tid[i],NULL);
    return 0;
}