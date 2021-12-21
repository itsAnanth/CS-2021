#include <stdio.h>
#include <stdlib.h>

struct Array {
    int *array;
    size_t size;
    size_t index;
};

typedef struct Array Array;

void print(Array *);
int pop(Array *);
void push(Array *, int);
void init(Array *);

int main() {
    int size;
    Array ar;
    init(&ar);
    printf("Initialized stack\n");
    for (int i = 0; i < 7; i++)
        push(&ar, i);
    pop(&ar);
    print(&ar);
}

int pop(Array * array) {
    int temp = array->array[array->index];
    array->array[array->index] = 0;
    array->index -= 1;
    return temp;
}
void print(Array *array) {
    for (int i = 0; i < array->index; i++)
        printf("%d ", array->array[i]);
    printf("\n");
}
void push(Array *array, int data) {
    if (array->size == array->index + 1) {
        array->size *= 2;
        array->array = (int *)realloc(array->array, array->size * sizeof(int));
    }
    array->array[array->index] = data;
    array->index++;
}
void init(Array *array) {
    array->array = (int *)malloc(sizeof(int));
    array->size = sizeof(int);
    array->index = 0;
}
