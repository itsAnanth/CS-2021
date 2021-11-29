#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

void read(int *, int*, int);
void solution(int *, int *, int);

int main() {
    int n;
    int * a, b;
    printf("Enter array size");
    scanf("%d", &n);
    a = malloc(n * sizeof(int));
    b = malloc(n * sizeof(int));
    read(a, b, n);
    printf("%s", solution(a, b, n) == 1 ? "player 1 won" : "player 2 won");
    return 0;
}

void read(int * a, int *b, int s) {
    for (int i = 0; i < s; i++) {
        printf("Enter score for player 1: \n");
        scanf("%d", &a[i]);
        printf("Enter score for player 2: \n");
        scanf("%d", &b[i]);
    }
}

int solution(int * a, int * b, int s) {
    int a1 = 0, a2 = 0;
    for (int i = 0; i < s; i++) {
        a1 += a[i];
        a2 += b[i];
    }
    return a1 > a2 ? true : false;
}