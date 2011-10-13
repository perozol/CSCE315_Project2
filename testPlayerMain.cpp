#include "testboard.h"
#include "testclient.h"

int main(int argc, char **argv) {

    TestPlayer player1;
    TestPlayer player2;
    TestBoard board;
    player1.startGame(false, &board);
    player2.startGame(true, &board);

    while (true) {
        player1.Think();
        player2.Think();
    }

    return 0;
}
