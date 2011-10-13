#include "testboard.h"
#include <cstdlib>

TestBoard::TestBoard(int col, int row, IPlayer* p1, IPlayer* p2)
    :rows(row), cols(col), p1(p1), p2(p2)
{
    // Create gameState array and initialize it
    boardState = (PLAYER*)malloc(sizeof(PLAYER) * col * row);
    int i = col*row;
    while (i-->0) boardState[i] = NONE;
}

bool TestBoard::isValid(Move m)
{
    return true;
}

std::list<Move>* TestBoard::listValidMoves(PLAYER p)
{
    return NULL;
}

bool TestBoard::makeMove(Move m)
{
    if (m.col < 0 || m.col >= cols) return false;
    if (m.row < 0 || m.row >= rows) return false;
    boardState[8*m.row + m.col] = m.p;
    p1->moveMade(m);
    p2->moveMade(m);
    return true;
}

