#include <stdio.h>

int peak(int *, int);

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 4, 2, 9, 1, 0, 8 };
    int size = sizeof(arr)/sizeof(int);
    int peakV = peak(arr, size);
    printf("%d", peakV);
    return 0;
}

int peak(int * arr, int size) {
    int L = arr[0], R = arr[size - 1];
    for (int i = 0; i < size/2; i++) {
        if (L < arr[i + 1]) L = arr[i + 1];
        if (arr[size - i - 1] > R) R = arr[size - i - 1];
    }
    return L >= R ? L : R;
}