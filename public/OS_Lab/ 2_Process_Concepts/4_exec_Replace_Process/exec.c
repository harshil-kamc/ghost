#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("Before exec()\n");
    execl("/bin/ls", "ls", "-l", NULL);
    printf("Exec failed\n");
    return 0;
}