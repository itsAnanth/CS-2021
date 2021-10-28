#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <conio.h>

typedef struct {
    int position;
} Player;

void track(char * track);
void move(Player* player, int diff);
void tortoiseMove(Player* player);
void hareMove(Player* player);
char game(Player* hare, Player* tortoise, char * trackb);

int main() {
    char trackB[70];
    Player hare;
    Player tortoise;
    hare.position = 0;
    tortoise.position = 0;
    track(trackB);
    printf("race started\n");
    // printf("%s", trackB);
    char winner = game(&hare, &tortoise, trackB);
    printf("%c", winner);

}

char game(Player* hare, Player* tortoise, char * trackb) {
    bool run = true;
    char winner;
    while(run) {
        // printf("%d", tortoise->position);
        if (hare->position >= 70) {
            winner = 'H';
            break;
        } else if (tortoise->position >= 70) {
            winner = 'T';
            break;
        }
        system("cls");
        tortoiseMove(tortoise);
        hareMove(hare);
        trackb[hare->position] = 'H';
        trackb[tortoise->position] = 'T';
        printf("%s\n", trackb);
        trackb[hare->position] = '_';
        trackb[tortoise->position] = '_';
        sleep(1);
    }
    return winner;
}

void move(Player* player, int diff) {
    if (player->position + diff < 0)
        player->position = 0;
    else 
        player->position += diff;
}

void tortoiseMove(Player* player) {
    int num = rand() % 10;
    int diff;
    switch (num) {
        case 1:
        case 2:
            diff = -6;
            break;
        case 3:
        case 4:
        case 5:
            diff = 1;
            break;
        default:
            diff = 3;
            break;
    }
    move(player, diff);
}

void hareMove(Player* player) {
    int num = rand() % 10;
    int diff;
    switch (num) {
        case 1:
        case 2:
            diff = 0;
            break;
        case 3:
        case 4:
            diff = 9;
            break;
        case 5:
            diff = -12;
            break;
        case 6:
        case 7:
            diff = -2;
            break;
        default:
            diff = 1;
            break;
    }
    move(player, diff);
}

void track(char * track) {
    int i;
    for (i = 0; i < 70; i++)
        track[i] = '_';
}