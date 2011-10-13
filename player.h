#ifndef _PLAYER_H_
#define _PLAYER_H_

#include "common.h"

class IPlayer {
    virtual void startGame(bool white)=0;
    virtual void moveMade(Move m)=0;
    virtual void gameEnd(PLAYER winner)=0;
};



class TempPlayer : public IPlayer
{
public:
	PLAYER color;

	TempPlayer(PLAYER c)
	{
		color = c;
	}
	void startGame(bool white){}
	void moveMade(Move m){}
	void gameEnd(PLAYER winner){}

};



#endif