#include <stdio.h>

int sequentialSearchWithSentinel(int arr[], int size, int x) {
    int i;
    arr[size] = x; 

    for (i = 0; arr[i] != x; i++);

    if (i < size) {
        return i; 
    } else {
        return -1;
    }
}

int main() {
    int A[] = {12, 20, 22, 30, 10, 8, 33, 7, 15};
    int size = sizeof(A) / sizeof(A[0]);
    int X, result;

    printf("Masukkan nilai yang ingin dicari: ");
    scanf("%d", &X);

    result = sequentialSearchWithSentinel(A, size, X);

    if (result != -1) {
        printf("Nilai %d ditemukan di indeks %d\n", X, result);
    } else {
        printf("Nilai %d tidak ditemukan dalam array\n", X);
    }

    return 0;
}
