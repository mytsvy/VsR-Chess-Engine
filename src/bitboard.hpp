#include "types.hpp"

#ifndef BITBOARD_HPP
#define BITBOARD_HPP

namespace Masks{
    constexpr u64 FILE_A = 0x0101010101010101ULL;
    constexpr u64 FILE_B = FILE_A << 1;
    constexpr u64 FILE_C = FILE_A << 2;
    constexpr u64 FILE_D = FILE_A << 3;
    constexpr u64 FILE_E = FILE_A << 4;
    constexpr u64 FILE_F = FILE_A << 5;
    constexpr u64 FILE_G = FILE_A << 6;
    constexpr u64 FILE_H = FILE_A << 7;

    constexpr u64 RANK_1 = 0x00000000000000FFULL;
    constexpr u64 RANK_2 = RANK_1 << 8;
    constexpr u64 RANK_3 = RANK_2 << 8;
    constexpr u64 RANK_4 = RANK_3 << 8;
    constexpr u64 RANK_5 = RANK_4 << 8;
    constexpr u64 RANK_6 = RANK_5 << 8;
    constexpr u64 RANK_7 = RANK_6 << 8;
    constexpr u64 RANK_8 = RANK_7 << 8;
}


struct Board{
    u64 All_PiecesBB[3]; // 0 -> White, 1-> Black, 2-> All Of Them
    u64 PiecesBB[PIECE_NUMBERS]; // 0-5 -> White, 6-11 -> Black 
    int TurnF; // 0 -> White, 1 -> Black
    inline u64 get_white_pieces() const { return All_PiecesBB[WHITE];}
    inline u64 get_black_pieces() const { return All_PiecesBB[BLACK];}
    inline u64 get_both_pieces() const { return All_PiecesBB[BOTH];}

    inline void switch_turn() { TurnF^=1;}
};

extern Board board;

void initBoard();

#endif
