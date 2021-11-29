#include <stdio.h>
#include <stdlib.h>
// read digits from file
// test case 
/**
 * 99 13
 * 44 55
 */
struct Array {
    int *array;
    size_t size;
    size_t index;
};

typedef struct Array Array;

void print(Array *);
void push(Array *, int);
void init(Array *);

int main() {
    FILE *myFile;
    myFile = fopen("somenumbers.txt", "r");
    //read file into array
    Array ar;
    init(&ar);
    char curr;
    char * temp = NULL;
    int j = 0;
    while ((curr = fgetc(myFile)) != EOF) {
        if (curr >= '0' && curr <= '9' && curr != ' ') {
            if (temp == NULL) temp = (char*)malloc(10 * sizeof(char));
            temp[j] = curr;
            j++;
        } else {
            temp[j] = '\0';
            int digit = atoi(temp);
            free(temp);
            temp = NULL;
            j = 0;
            push(&ar, digit);
        }
    }
    int digit = atoi(temp);
    free(temp);
    push(&ar, digit);
    print(&ar);
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