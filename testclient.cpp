#include "testclient.h"
#include <cstdio>
#include <string>
#include <iostream>
#include <sstream>
#include <cstdlib>

void TestClient::startGame(bool isWhite, IBoard* gameBoard)
{
    board = gameBoard;
    isWhite ? p = WHITE : p = BLACK;

    // Create gameState array and initialize it
    gameState = (PLAYER*)malloc(sizeof(PLAYER)*8*8);
    int i = 8*8;
    while (i-->0) gameState[i] = NONE;

    printf("Player %d: Ready\n", p);
}

void TestClient::moveMade(Move m)
{
    gameState[ 8*m.row + m.col ] = m.p;
}

void TestClient::gameEnd(PLAYER winner)
{
    printf("Player %d: Player %d won!\n", p, winner);
}

void TestClient::Think()
{
    printf("Player %d: Thinking...\n", p);

    printBoard();

    Move myMove;
    myMove.p = p;
    do {
        std::string input;

        printf("Player %d: Col for move? ", p);
        getline(std::cin, input);
        std::istringstream converter(input);
        converter >> myMove.col;
        myMove.col--;

        printf("Player %d: Row for move? ", p);
        input.clear();
        converter.clear();
        getline(std::cin, input);
        converter.str(input);
        converter >> myMove.row;
        myMove.row--;

        printf("Player %d: Moving %d, %d\n", p, myMove.col, myMove.row);
    } while (!board->makeMove(myMove));
}

void TestClient::printBoard()
{
    printf("    1   2   3   4   5   6   7   8\n");
    for (int i = 0; i < 8; i++) {
        printf("  +---+---+---+---+---+---+---+---+\n%d ", i+1);
        for (int j = 0; j < 8; j++) {
            char pChar = ' ';
            switch (gameState[8*i + j]) {
                case WHITE:
                    pChar = 'W';
                    break;
                case BLACK:
                    pChar = 'B';
                    break;
                default:
                    break;
            }

            printf("| %c ", pChar);
        }
        printf("|\n");
    }
    printf("  +---+---+---+---+---+---+---+---+\n");
}

