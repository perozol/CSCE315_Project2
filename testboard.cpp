#include "testboard.h"

TestBoard::TestBoard(int col, int row)
    :rows(row), cols(col)
{
    boardState = malloc(sizeof(PLAYER)*col*row);
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
    if (!m.col || m.col >= cols) return false;
    if (!m.row || m.row >= rows) return false;
    boardState[col][row];
    return true;
}

