#include <stdio.h>

void swap(int *, int *);
void print(int *, int); 
int partition(int [], int);
void quickSort(int [], int, int);

int main() {
    int arr[] = { 10, 2, 43, 5, 5, 3, 6 };
    int size = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, 0, size - 1);
    print(arr, size);
}

void print(int *a, int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", a[i]);
    printf("\n");
}
void swap(int * a, int * b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int * arr, int size) {
    int pivot = arr[size - 1];
    int ptr = -1;
    int i;
    for (i = 0; i < size - 1; i++) {
        if (arr[i] <= pivot) {
            ptr++;
            swap(&arr[i], &arr[ptr]);
        }
    }
    swap(&arr[ptr + 1], &arr[size - 1]);
    return ptr+1;
}

void quickSort(int *a, int L, int H) {
    if (L < H) {
        int pivot = partition(a, H + 1);

        quickSort(a, 0, pivot - 1);
        quickSort(a, pivot + 1, H);
    }
}