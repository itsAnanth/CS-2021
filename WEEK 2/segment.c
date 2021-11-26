#include <stdio.h>
int funcSeg(int n, int a[], int k, int s) {
    for (int i = 0; i < n; i += s) {
        int count = 0;
        for (int j = i; j < i + s; j++) {
            if (a[j] == k) count ++;
        }
        if (!count) return 0;
    }    
    return 1;
}
int main() {
    int i, n, k, seg, b;
    n = 12;
    int a[] = {3, 5 ,2, 4, 9, 3, 1, 7 ,3, 11, 12, 3};
    printf("Enter the array\n");

    
    printf("Enter the key\n");
    scanf("%d", &k);
    printf("Enter the segment\n");
    scanf("%d", &seg);
    b = funcSeg(n, a, k, seg);
    b == 1 ? printf("Yes\n") : printf("No\n");
    return 0;
}