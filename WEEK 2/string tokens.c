#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i;
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    for (i = 0; i < strlen(s); i++) {
        if (s[i] != ' ')
            printf("%c", s[i]);
        else
            printf("\n");
    }
    return 0;
}