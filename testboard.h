#include "board.h"

class TestBoard : public virtual IBoard {
    int rows, cols;
    PLAYER **boardState

    public:
    TestBoard::TestBoard(int col, int row);
    bool isValid(Move m);
    std::list<Move>* listValidMoves(PLAYER p);
    bool makeMove(Move m);
};
