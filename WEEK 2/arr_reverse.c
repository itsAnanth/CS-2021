#include <stdio.h>
#include <stdlib.h>

// arr reverse
int main() {
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*)malloc(num * sizeof(int));
    for (i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    int mid = num / 2;
    for (i = 0; i < mid; i++) {
        int temp = arr[i];
        arr[i] = arr[num - i - 1];
        arr[num - i - 1] = temp;
    }

    for (i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
