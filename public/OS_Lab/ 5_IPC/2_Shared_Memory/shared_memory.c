#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <string.h>
#include <unistd.h>
int main() {
    int shmid = shmget(IPC_PRIVATE, 1024, 0666 | IPC_CREAT);
    char *str = (char*) shmat(shmid, NULL, 0);
    if (fork() == 0) {
        strcpy(str, "Hello via Shared Memory");
        shmdt(str);
    } else {
        sleep(1);
        printf("Parent read: %s\n", str);
        shmdt(str);
        shmctl(shmid, IPC_RMID, NULL);
    }
    return 0;
}