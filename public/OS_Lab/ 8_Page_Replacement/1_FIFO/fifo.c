#include <stdio.h>
int main() {
    int pages[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3}, n = 10, frames = 3;
    int temp[frames], faults = 0, i, j, k = 0, flag;
    for(i=0; i<frames; i++) temp[i] = -1;
    for(i=0; i<n; i++) {
        flag = 0;
        for(j=0; j<frames; j++) if(temp[j] == pages[i]) { flag = 1; break; }
        if(flag == 0) {
            temp[k] = pages[i];
            k = (k + 1) % frames;
            faults++;
        }
    }
    printf("Total Page Faults (FIFO): %d\n", faults);
    return 0;
}