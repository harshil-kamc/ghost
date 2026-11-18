#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Process is running\n");
    printf("Process is terminating\n");
    exit(0);
    printf("This statement will not execute\n");
    return 0;
}