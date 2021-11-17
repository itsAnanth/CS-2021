#include <stdio.h>
#include <math.h>

int main(void) {
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);
    int i, pre = 0, pre1 = 1;
    printf("0 1 ");
    for (i = 1; i <= n; i++) {
        printf("%d ", pre + pre1);
        int temp = pre;
        pre = pre1;
        pre1 = temp + pre1;
    }
    return 0;
}