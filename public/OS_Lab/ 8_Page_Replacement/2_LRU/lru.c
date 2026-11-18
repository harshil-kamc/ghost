#include <stdio.h>
int main() {
    int pages[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3}, n = 10, frames = 3;
    int temp[frames], time[frames], faults = 0, i, j, counter = 0, pos;
    for(i=0; i<frames; i++) { temp[i] = -1; time[i] = 0; }
    for(i=0; i<n; i++) {
        int flag = 0;
        for(j=0; j<frames; j++) {
            if(temp[j] == pages[i]) { counter++; time[j] = counter; flag = 1; break; }
        }
        if(flag == 0) {
            int min = time[0]; pos = 0;
            for(j=1; j<frames; j++) if(time[j] < min) { min = time[j]; pos = j; }
            temp[pos] = pages[i];
            counter++;
            time[pos] = counter;
            faults++;
        }
    }
    printf("Total Page Faults (LRU): %d\n", faults);
    return 0;
}