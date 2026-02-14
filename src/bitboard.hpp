#include <cstdint>

#ifndef BITBOARD
#define BITBOARD

typedef uint64_t u64;

struct Board{
    u64 All_PiecesBB[3];
    u64 PiecesBB[12];
};

extern Board board;

void initBoard();

#endif
