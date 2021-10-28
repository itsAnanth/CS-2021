#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    printf("Enter number of elements to allocate :");
    while(scanf("%d", &n)) {
        int * ptr = (int*)calloc(n, sizeof(int));
        for (i = 0; i < n; i++)
            ptr[i] = i;
        for (i = 0; i < n; i++)
            printf("%d ", ptr[i]);
        free(ptr);
        for (i = 0; i < n; i++)
            printf("%d ", ptr[i]);
    }
    return 0;

}