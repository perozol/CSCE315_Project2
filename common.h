#ifndef _COMMON_H_
#define _COMMON_H_

enum PLAYER {
    NONE, WHITE, BLACK
};

struct Move {
    int col;
    int row;
    PLAYER p;
};

#endif
