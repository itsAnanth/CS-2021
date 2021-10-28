#include <stdio.h>

void printArray(int *array, int size);
void partition(int *array, int size);
void swap(int *a, int *b);

int main(int argc, char const *argv[]) {
    int arr[] = {8, 7, 6, 1, 0, 9, 2};
    // int arr[] = {10, 16, 8, 12, 15, 6, 3, 9, 5, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);
    partition(arr, size);
    printArray(arr, size);

    return 0;
}

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void partition(int *array, int size) {
    int low = 0;
    int high = size - 1;
    int pivot = array[high];
    int i, j = (low - 1);

    for (i = low; i < high; i++) {
        if (array[i] <= pivot) {
            j++;
            swap(&array[j], &array[i]);
            printArray(array, size);

        }
    }

    swap(&array[j + 1], &array[high]);
    printf("\n");
    printf("%d %d\n", array[j + 1], array[high]);
}

void printArray(int *array, int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
}
