#include <string>
#include <iostream>
#include <list>
#include <vector>
#include "player.h"
#include "board.h"

using namespace std;


bool rules(TempPlayer p, PLAYER Boardstate[8][8],Move m,list<pair<int,int>> edges)
{
	//Check to make sure the move is on the edge
	bool isEdge = false;
	pair<int,int> move(m.row,m.col);
	list<pair<int,int>>::iterator it;
	for(it = edges.begin(); it != edges.end(); it++)
	{
		if(move == *it) {isEdge = true;}
	}
	if(isEdge == false) {return false;}

	int start;
	int end;

	//Check Left
	start = m.col-1;
	end = 0;

	if(Boardstate[m.row][start] != p.color && Boardstate[m.row][start] != NONE)
	{
		for(int i = start; i >= end; i--)
		{
			cout<<m.row<<" "<<i<<endl;
			if(Boardstate[m.row][i] == NONE)
			{
				break;
			}
			if(Boardstate[m.row][i] == p.color)
			{
				return true;
			}
		}
	}

	//Check Right
	start = m.col+1;
	end = 8;
	
	if(Boardstate[m.row][start] != p.color && Boardstate[m.row][start] != NONE)
	{
		for(int i = start; i <= end; i++)
		{
			cout<<m.row<<" "<<i<<endl;
			if(Boardstate[m.row][i] == NONE)
			{
				
				break;
			}
			if(Boardstate[m.row][i] == p.color)
			{
				return true;
			}
		}
	}

	//Check UP
	start = m.row-1;
	end = 0;
	
	if(Boardstate[start][m.col] != p.color && Boardstate[start][m.col] != NONE)
	{
		for(int i = start; i >= end; i--)
		{
			cout<<m.row<<" "<<i<<endl;
			if(Boardstate[i][m.col] == NONE)
			{
				break;
			}
			if(Boardstate[i][m.col] == p.color)
			{
				return true;
			}
		}
	}

	//Check DOWN
	start = m.row+1;
	end = 8;
	
	if(Boardstate[start][m.col] != p.color && Boardstate[start][m.col] != NONE)
	{
		for(int i = start; i <= end; i++)
		{
			cout<<m.row<<" "<<i<<endl;
			if(Boardstate[i][m.col] == NONE)
			{
				break;
			}
			if(Boardstate[i][m.col] == p.color)
			{
				return true;
			}
		}
	}
	
	return false;
}