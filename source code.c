#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];

    for (i = 0; i < n1; i++) L[i] = arr[l + i];
    for (j = 0; j < n2; j++) R[j] = arr[m + 1 + j];

    i = 0; j = 0; k = l;
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
    while (i < n1) { arr[k] = L[i]; i++; k++; }
    while (j < n2) { arr[k] = R[j]; j++; k++; }
}

void mergeSort(int arr[], int l, int r, int size) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m, size);
        mergeSort(arr, m + 1, r, size);
        merge(arr, l, m, r);
        printf("After merge pass: ");
        printArray(arr, size);
    }
}

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high, int size) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    printf("After partition (pivot %d): ", pivot);
    printArray(arr, size);
    return (i + 1);
}

void quickSort(int arr[], int low, int high, int size) {
    if (low < high) {
        int pi = partition(arr, low, high, size);
        quickSort(arr, low, pi - 1, size);
        quickSort(arr, pi + 1, high, size);
    }
}

int main() {
    int data1[] = {324, 125, 456, 218, 102, 389, 275, 147}; 
    int size = sizeof(data1) / sizeof(data1[0]);
    int data2[size];
    
    for(int i=0; i<size; i++) data2[i] = data1[i];

    printf("--- Merge Sort Execution ---\n");
    mergeSort(data1, 0, size - 1, size);
    printf("Final Sorted Array: ");
    printArray(data1, size);

    printf("\n--- Quick Sort Execution ---\n");
    quickSort(data2, 0, size - 1, size);
    printf("Final Sorted Array: ");
    printArray(data2, size);

    return 0;
}