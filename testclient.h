#ifndef _TESTCLIENT_H_
#define _TESTCLIENT_H_

#include "player.h"
#include "board.h"

class TestClient : public virtual IPlayer {
    IBoard* board;
    PLAYER p;

    public:
    void startGame(bool isWhite, IBoard* gameBoard);
    void moveMade(Move m);
    void Think();
    void gameEnd(PLAYER winner);
};

#endif
