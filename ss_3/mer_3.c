#include <stdio.h>

void merge(int arr[], int l, int m, int r) {
    int i, j, k;

    int n1 = m - l + 1;  // number of elements in first subarray
    int n2 = r - m;      // number of elements in second subarray

    // create temporary subarrays
    int L[n1];  // array[l..m]
    int R[n2];  // array[m+1..r]

    // copy data to subarrays L and R 
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // merge the two arrays
    i = 0;    // index of L
    j = 0;    // index of R
    k = l;    // index of merged array
   
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
     
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int array[], int l, int r) {

    if (l < r) {
        // avoids overflow for large l and h
        int m = l + (r - l) / 2;

        mergeSort(array, l, m);
        mergeSort(array, m + 1, r);
        merge(array, l, m, r);
    }

}


int main (void) {

    int i;
    int array[10] = {3, 6, 1, 7, 2, 0, 4, 5, 9, 8};

    printf("       array: ");
    for (i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    mergeSort(array, 0, sizeof(array) / sizeof(array[0]) - 1);

    printf("sorted array: ");
    for (i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
