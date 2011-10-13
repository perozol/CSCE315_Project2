#include "board.h"
#include "player.h"

class TestBoard : public virtual IBoard {
    int rows, cols;
    PLAYER *boardState;
    IPlayer* p1;
    IPlayer* p2;

    public:
    TestBoard(int col, int row, IPlayer* p1, IPlayer* p2);
    bool isValid(Move m);
    std::list<Move>* listValidMoves(PLAYER p);
    bool makeMove(Move m);
};
