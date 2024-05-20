#include <stdio.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high, int ascending) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high-1; j++) {
        if ((ascending && arr[j] < pivot) || (!ascending && arr[j] > pivot)) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high, int ascending) {
    if (low < high) {
        int pi = partition(arr, low, high, ascending);
        quickSort(arr, low, pi - 1, ascending);
        quickSort(arr, pi + 1, high, ascending);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int A[100];
    int size, i, order;

    printf("Masukkan jumlah elemen: ");
    scanf("%d", &size);

    printf("Masukkan elemen array: \n");
    for (i = 0; i < size; i++) {
        scanf("%d", &A[i]);
    }

    printf("Pilih urutan (1 untuk ascending, 0 untuk descending): ");
    scanf("%d", &order);

    quickSort(A, 0, size-1, order);

    printf("Array setelah diurutkan: \n");
    printArray(A, size);

    return 0;
}
