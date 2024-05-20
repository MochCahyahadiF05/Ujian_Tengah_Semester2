#include <stdio.h>

void bubbleSort(int arr[], int size) {
    int i, j, temp;
    for (i = 0; i < size-1; i++) {
        for (j = 0; j < size-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int size, int x) {
    int low = 0, high = size - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int A[] = {12, 20, 22, 30, 10, 8, 33, 7, 15};
    int size = sizeof(A) / sizeof(A[0]);
    int X, result;

    bubbleSort(A, size); 

    printf("Masukkan nilai yang ingin dicari: ");
    scanf("%d", &X);

    result = binarySearch(A, size, X);

    if (result != -1) {
        printf("Nilai %d ditemukan di indeks %d\n", X, result);
    } else {
        printf("Nilai %d tidak ditemukan dalam array\n", X);
    }

    return 0;
}
