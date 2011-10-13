#include "Rules.h"



int main()
{
	//Init simple test board;
	PLAYER board[8][8];
	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			board[i][j] = NONE;
		}
	}
	board[2][4] = WHITE; board[2][5] = BLACK; board[3][3] = WHITE; board[3][4] = WHITE; board[4][3] = BLACK; board[4][4] = BLACK;

	list<pair<int,int>> edges;
	pair<int,int> edge1(4,5); pair<int,int> edge2(2,3); pair<int,int> edge3(5,4); pair<int,int> edge4(1,4);
	edges.push_front(edge1); edges.push_front(edge2); edges.push_front(edge3); edges.push_front(edge4);
	TempPlayer p(BLACK);
	Move m;
	m.row = 1;
	m.col = 4;
	m.p = BLACK;
	if(rules(p,board,m,edges))
	{
		cout<<"Valid"<<endl;
	}
	else
	{
		cout<<"Invalid"<<endl;
	}
	string dummy;
	cin>>dummy;

	
	return 0;
}


/*SIMPLE TEST BOARD


  a b c d e f g h
 +-+-+-+-+-+-+-+-+
1| | | | | | | | |
 +-+-+-+-+-+-+-+-+
2| | | | | | | | |
 +-+-+-+-+-+-+-+-+
3| | | | |W|B| | |
 +-+-+-+-+-+-+-+-+
4| | | |W|W| | | |
 +-+-+-+-+-+-+-+-+
5| | | |B|W| | | |
 +-+-+-+-+-+-+-+-+
6| | | | | | | | |
 +-+-+-+-+-+-+-+-+
7| | | | | | | | |
 +-+-+-+-+-+-+-+-+
8| | | | | | | | |
 +-+-+-+-+-+-+-+-+


COMPLEX TEST BOARD


  a b c d e f g h
 +-+-+-+-+-+-+-+-+
1| |B| | | | | | |
 +-+-+-+-+-+-+-+-+
2| | |B|W| |W| | |
 +-+-+-+-+-+-+-+-+
3| | |B|W| |W|B| |
 +-+-+-+-+-+-+-+-+
4| | |B|W|W|B|B|B|
 +-+-+-+-+-+-+-+-+
5| | |W|W|B|W|B|B|
 +-+-+-+-+-+-+-+-+
6| |W|W|W|W|W| |B|
 +-+-+-+-+-+-+-+-+
7| | |B|W|W| | | |
 +-+-+-+-+-+-+-+-+
8| | | | |W| | | |
 +-+-+-+-+-+-+-+-+

 */









