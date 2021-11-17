#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int *, int);

int main(void) {
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    int size = sizeof(arr)/sizeof(arr[0]);
    int i;
    shuffle(arr, size);
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

void shuffle(int * arr, int size) {
    int index = size, randomIndex;
    srand(time(NULL));
    while (index != 0) {
        randomIndex = rand() % size;
        index--;
        int temp = arr[index];
        arr[index] = arr[randomIndex];
        arr[randomIndex] = temp;
    }
}