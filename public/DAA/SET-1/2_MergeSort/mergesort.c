#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Merge(int a[],int low, int mid, int high) {
    int i, j, k, temp[high];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high) {
        if (a[i] < a[j]) {
            temp[k] = a[i];
            k++;
            i++;
        } else {
            temp[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {
        temp[k] = a[i];
        k++;
        i++;
    }
    while (j <= high) {
        temp[k] = a[j];
        k++;
        j++;
    }
    for (i = low; i <= high; i++) {
        a[i] = temp[i];
    }
}

void MergeSort(int a[],int low, int high) {
    int mid;
    if (low < high) {
        mid=(low+high)/2;
        MergeSort(a,low, mid);
        MergeSort(a,mid+1, high);
        Merge(a,low, mid, high);
    }
}

void main() {
    int n, *a,k;
    clock_t st,et;
    double ts;
    printf("\n Enter How many Numbers: ");
    scanf("%d", &n);
    a=(int *)calloc(n,sizeof(int));
    printf("\nThe Random Numbers are:\n");
    for(k=0; k<n; k++) {
        a[k]=rand()%n+1;
        printf("%d\t",a[k]);
    }
    st=clock();
    for(k=1;k<10000;k++) MergeSort(a,0,n-1);
    et=clock();
    ts=(float)(et-st)/CLOCKS_PER_SEC;
    ts=ts/10000;
    printf("\nSorted Numbers are: \n ");
    for(k=0; k<n; k++) printf("%d\t", a[k]);
    printf("\nThe time taken is %e sec",ts);
}