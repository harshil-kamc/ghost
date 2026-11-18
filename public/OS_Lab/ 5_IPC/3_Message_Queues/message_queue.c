#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <string.h>
struct msg_buffer { long msg_type; char msg_text[100]; } message;
int main() {
    int msgid = msgget(IPC_PRIVATE, 0666 | IPC_CREAT);
    if (fork() == 0) {
        message.msg_type = 1;
        strcpy(message.msg_text, "Hello via Message Queue");
        msgsnd(msgid, &message, sizeof(message), 0);
    } else {
        sleep(1);
        msgrcv(msgid, &message, sizeof(message), 1, 0);
        printf("Parent received: %s\n", message.msg_text);
        msgctl(msgid, IPC_RMID, NULL);
    }
    return 0;
}