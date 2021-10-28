#include <stdlib.h>
#include <stdio.h>

typedef struct {
    int * array;
    int size;
    int used;
} Array;

void init(Array * ar, int size) {
    ar->array = (int*)calloc(size, sizeof(int));
    ar->size = size;
    ar->used = 0;
}

void insert(Array * ar, int element) {
    if (ar->used + 1 == ar->size) {
        int i = ar->size;
        ar->size *= 2;
        ar->array = (int*)realloc(ar->array, ar->size * sizeof(int));
        
        for (i; i < ar->size; i++)
            ar->array[i] = 0;
    }
    ar->array[ar->used++] = element;
}


int main() {
    int i;
    Array ar;
    init(&ar, 5);
    for (i = 0; i < 6; i++)
        insert(&ar, i + 1);
    for (i = 0; i < ar.size; i++)
        printf("%d ", ar.array[i]);
    return 0;
}
