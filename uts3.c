#include <stdio.h>

void bubbleSort(int arr[], int size, int ascending) {
    int i, j, temp;
    for (i = 0; i < size-1; i++) {
        for (j = 0; j < size-1-i; j++) {
            if ((ascending && arr[j] > arr[j+1]) || (!ascending && arr[j] < arr[j+1])) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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

    bubbleSort(A, size, order);

    printf("Array setelah diurutkan: \n");
    printArray(A, size);

    return 0;
}
