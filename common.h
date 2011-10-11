#ifndef _COMMON_H_
#define _COMMON_H_

enum PLAYER {
    None, White, Black
};

struct Move {
    int col;
    int row;
    PLAYER p;
};

#endif
