#include "testboard.h"
#include "testclient.h"
#include <cstdio>

int main(int argc, char **argv)
{
    printf("Init...\n");
    TestClient player1;
    TestClient player2;
    printf("Players created\n");
    TestBoard board(8,8, &player1, &player2);
    printf("Board created\n");
    player1.startGame(false, &board);
    player2.startGame(true, &board);
    printf("Starting game...\n");

    while (true) {
        player1.Think();
        player2.Think();
    }

    return 0;
}
