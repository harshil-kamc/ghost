#include <stdio.h>
#include <stdlib.h>
int main() {
    int req[] = {98, 183, 37, 122, 14, 124, 65, 67};
    int n = 8, head = 53, total_seek = 0, done[8] = {0};
    for(int i=0; i<n; i++) {
        int min_dist = 9999, pos = -1;
        for(int j=0; j<n; j++) {
            if(!done[j] && abs(req[j] - head) < min_dist) {
                min_dist = abs(req[j] - head);
                pos = j;
            }
        }
        total_seek += min_dist;
        head = req[pos];
        done[pos] = 1;
    }
    printf("Total Seek Time (SSTF): %d\n", total_seek);
    return 0;
}