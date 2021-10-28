#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int i, j, r = 2, c = 2;
    char str[9];
    char zeroes[9];
    for (int i = 0; i < 8; i++) {
        if (i == c - 1) str[i] = '0';
        else str[i] = 'X';
    }
    for (int i = 0; i < 8; i++)
        zeroes[i] = '0';
    zeroes[8] = '\n';
    str[8] = '\n';

    for (j = 0; j < 8; j++) {
        for (i = 0; i < 9; i++) {
            char val = j == r - 1 ? zeroes[i] : str[i];
            if (i != 8) printf("%c ", val);
            else printf("%c", val);
        }
    }
    return 0;
}
