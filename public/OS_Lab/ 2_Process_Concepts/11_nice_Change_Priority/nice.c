#include <stdio.h>
#include <unistd.h>

int main()
{
    int result;
    result = nice(5);
    printf("New nice value: %d\n", result);
    return 0;
}