#include <stdio.h>
#define true 1
#define false 0

int isMountain(int *, int);

int main() {
    int arr[] = { 0, 3, 4, 5, 4, 3, 1 };
    int m = isMountain(arr, sizeof(arr)/sizeof(int));
    printf("%s", m == 0 ? "no" : "yes");
    return 0;
}

int isMountain(int * arr, int size) {
    int left = 0, right = size - 1;
    
    while (left < size && arr[left] < arr[left + 1])
        left++;
    while (right > 0 && arr[right] < arr[right - 1])
        right--;
    return left == right && left < size && left > 0 ? true : false;
}