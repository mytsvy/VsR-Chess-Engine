#ifndef MOVEGENERATION_HPP
#define MOVEGENERATION_HPP
#include "../bitboard.hpp"

/*
 Pseudo Move Functions
 -------------------
 P for Pseudo
 M for Move
 Other chars are name of the piece
*/

enum M_Flags{
    NORMAL, DOUBLE_PAWN_PUSH, CAPTURE, EN_PASSANT, CASTLING, PROMOTION
};


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

void P_PM();
void P_NM();
void P_BM();
void P_QM();
void P_KM();
void P_RM();

#endif
