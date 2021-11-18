#include <stdio.h>
#include <stdlib.h>
 
// not to future pepega self
/**
 * int ** arr
 * means an array where each element is a pointer (aka pointer to the base of the first element of nested array)
 * basic 3x3 array
 * [
 *  [1, 2, 3],
 *  [4, 5, 6],
 *  [7, 8, 9]
 * ]
 * 
 * where i = number of subarrays and 
 * j = number of elements inside subarrays 
 */
void assign(int** arr, int m, int n) {
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) 
            arr[i][j] = i + j;   
}

void freeMem(int ** arr, int i) {
    for (int k = 0; k < i; k++)
        free(arr[k]);
    free(arr);
    printf("freed all memory");
}

void print(int ** arr, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
}
int main(void) {
    int i, j, r;
    printf("enter dimensions : ");
    printf("\n");
    scanf("%d%d", &i, &j);
    int ** arr = (int**)malloc(i * sizeof(int*));
    for (int r = 0; r < i; r++) 
        arr[r] = (int *)malloc(j * sizeof(int));
    assign(arr, i, j);
    print(arr, i, j);
    freeMem(arr, i);
}