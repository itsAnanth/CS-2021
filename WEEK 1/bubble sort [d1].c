#include <stdio.h>

// g++ "week 1/bubble sort [d1].c"

void bubbleSort(int * array, int size);
void swap(int * a, int * b);


int main() {
    int array[10] = { 2, 5, 10, 12, 15, 24, -1, 4, 9, 11 };
    int size = sizeof(array)/sizeof(array[0]);
    int i = 0;
    bubbleSort(array, size);
    for (i; i < size; i++)
        printf("%d ", array[i]);
}

void bubbleSort(int * array, int size) {
    int i, j;
    for (i = 0; i < size; i++) {
        int swaps = 0;
        for (j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
                swaps++;
            };
        }
        if (!swaps) break;
    }
}

void swap(int * a, int * b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
