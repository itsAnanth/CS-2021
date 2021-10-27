#include <stdio.h>

int main() {
    int array[10] = {10, 2, 0, 14, 43, 25, 18, 1, 5, 45};
    int size = sizeof(array) / sizeof(array[0]);
    int i, j, k, pass = 0;

    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                pass++;
            }
        }
    }

    for (k = 0; k < size; k++) {
        printf("%d ", array[k]);
    }
}
