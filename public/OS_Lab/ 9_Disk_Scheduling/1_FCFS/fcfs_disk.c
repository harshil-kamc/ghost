#include <stdio.h>
#include <stdlib.h>
int main() {
    int req[] = {98, 183, 37, 122, 14, 124, 65, 67};
    int n = 8, head = 53, total_seek = 0;
    for(int i=0; i<n; i++) {
        total_seek += abs(req[i] - head);
        head = req[i];
    }
    printf("Total Seek Time (FCFS): %d\n", total_seek);
    return 0;
}