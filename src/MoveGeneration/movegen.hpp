#ifndef MOVEGENERATION_HPP
#define MOVEGENERATION_HPP
#include "../types.hpp"

/*
 Pseudo Move Functions
 -------------------
 P for Pseudo
 M for Move
 Other chars are name of the piece
*/


struct Move{
    u16 from : 6;
    u16 to : 6;
    u16 flags : 4;
    int score;
};

struct MoveList{
    Move moves[256];
    int count = 0;
    inline void add(u16 f, u16 t, u16 flag){ moves[count++] = {f, t, flag};}
};

void P_PM(u16 f, u16 t, u16 flag);
void P_NM(u16 f, u16 t, u16 flag);
void P_BM(u16 f, u16 t, u16 flag);
void P_QM(u16 f, u16 t, u16 flag);
void P_KM(u16 f, u16 t, u16 flag);
void P_RM(u16 f, u16 t, u16 flag);

#endif
