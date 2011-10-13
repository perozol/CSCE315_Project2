#include "testclient.h"
#include <cstdio>
#include <string>
#include <iostream>
#include <sstream>

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
        Move myMove;
        std::string input;

        printf("Player %d: Col for move? ", p);
        getline(std::cin, input);
        istringstream converter(input);
        converter >> myMove.col;

        printf("Player %d: Row for move? ", p);
        getline(std::cin, input);
        converter >> myMove.row;

        printf("Player %d: Moving %d, %d\n", p, myMove.col, myMove.row);
    } while (!board->makeMove(myMove));
}

