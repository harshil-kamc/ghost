#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void QuickSort(int a[], int low, int high) {
    if(low<high) {
        int i, j, pivot, k, temp;
        pivot=a[low];
        i=low;
        j=high;
        while(i<j) {
            while ( a[i] <= pivot) i=i+1;
            while ( a[j] > pivot ) j=j-1;
            if(i<j) {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        a[low]=a[j];
        a[j]=pivot;
        QuickSort(a,low,j-1);
        QuickSort(a,j+1,high);
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
    for(k=1;k<10000;k++) QuickSort(a, 0, n-1);
    et=clock();
    ts=(double)(et-st)/CLOCKS_PER_SEC;
    ts=ts/10000;
    printf("\nSorted Numbers are: \n ");
    for(k=0; k<n; k++) printf("%d\t", a[k]);
    printf("\nThe time taken is %e",ts);
}