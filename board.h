#ifndef _BOARD_H_
#define _BOARD_H_

#include "common.h"
#include <list>

class IBoard {
    public:
    virtual bool isValid(Move m)=0;
    virtual std::list<Move>* listValidMoves(PLAYER p)=0;
    virtual bool makeMove(Move m)=0;
};

#endif
