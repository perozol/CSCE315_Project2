#ifndef _PLAYER_H_
#define _PLAYER_H_

#include "common.h"

class IPlayer {
    virtual void startGame(bool white)=0;
    void moveMade(Move m)=0;
    virtual void gameEnd(Player winner)=0;
};

#endif
