#include <stdio.h>

/**
 * Time complexity
 * worst case - O(log n) // logarithmic
 * best case - O(1) // constant
 */

int find(int* array, int size, int key);

int main() {
    int array[8] = { 12, 22, 34, 47, 55, 67, 82, 98 };
    int tofind;
    int size = sizeof(array) / sizeof(array[0]);
    printf("Enter an element to find :\n");
    while (scanf("%d", &tofind)) {
        int index = find(array, size, tofind);
        if (index != -1)
            printf("Element %d found at index %d\n", array[index], index);
        else
            printf("That element does not exist in the array\n");
    }
    return 0;
}

int find(int* array, int size, int key) {
    int l = 0, h = size - 1;
    int mid;
    while (l <= h) {
        mid = (l + h) / 2;
        if (array[mid] == key)
            return mid;
        else if (key > array[mid])
            l = mid + 1;
        else
            h = mid - 1;
    }
    return -1;
}
