#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <conio.h>
#include <windows.h>

int main() {
    int delay = 1;
    int h, m, s;
    printf("Enter time : \n");
    scanf("%d%d%d", &h, &m, &s);
    if (h > 12 || m > 60 || s > 60) {
        printf("Invalid time");
    } else {
        while (1) {
            system("cls");
            s++;
            if (s > 60) {
                m++;
                s = 0;
            }
            if (m > 60) {
                h++;
                m = 0;
            }
            if (h > 12) {
                h = 1;
            }
            printf("\nClock :\n");
            printf("%02d:%02d:%02d", h, m, s);
            sleep(delay);
        }
    }
    return 0;
}