#ifndef _TESTCLIENT_H_
#define _TESTCLIENT_H_

#include "player.h"
#include "board.h"

class TestClient : public virtual IPlayer {
    IBoard* board;

    void startGame(bool white);
    void moveMade(Move m);
    void gameEnd(PLAYER winner);
}
