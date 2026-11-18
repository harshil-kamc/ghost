#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("Before exec()\n");
    execl("/bin/ls", "ls", "-l", NULL);
    printf("This statement executes only if exec() fails\n");
    return 0;
}