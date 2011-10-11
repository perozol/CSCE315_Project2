#include "testclient.h"
#include <cstdio>

void TestClient::startGame(bool isWhite, IBoard* gameBoard)
{
    board = gameBoard;
    isWhite ? p = PLAYER::WHITE : p = PLAYER::BLACK;
    printf("Player %d: Ready\n", p);
}

void TestClient::moveMade(Move m)
{
    printf("Player %d: Move recorded: Player %d takes %d, %d\n", p, m.p, m.col, m.row);
}

void TestClient::gameEnd(PLAYER winner)
{
    printf("Player %d: Player %d won!\n", p, m.p);
}

void TestClient::Think()
{
    printf("Player %d: Thinking...\n", p);
    do {
    } while (!board->makeMove(myMove));
}
