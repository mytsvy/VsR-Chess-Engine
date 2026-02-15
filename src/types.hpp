#ifndef TYPES_HPP
#define TYPES_HPP

#include <cstdint>

typedef uint64_t u64;
typedef uint16_t u16;

enum Pieces : int{
    W_PAWNS, W_ROOKS, W_KNIGHTS, W_BISHOPS, W_QUEEN, W_KING, // 0 - 5
    B_PAWNS, B_ROOKS, B_KNIGHTS, B_BISHOPS, B_QUEEN, B_KING, // 6 - -11
    PIECE_NUMBERS, EMPTY_SQ
};

enum Color : int{
    WHITE = 0, BLACK = 1, BOTH = 2
};

enum Squares : int{
    A1, B1, C1, D1, E1, F1, G1, H1,
    A2, B2, C2, D2, E2, F2, G2, H2,
    A3, B3, C3, D3, E3, F3, G3, H3,
    A4, B4, C4, D4, E4, F4, G4, H4,
    A5, B5, C5, D5, E5, F5, G5, H5,
    A6, B6, C6, D6, E6, F6, G6, H6,
    A7, B7, C7, D7, E7, F7, G7, H7,
    A8, B8, C8, D8, E8, F8, G8, H8
};

enum M_Flags : int{
    NORMAL = 0, 
    DOUBLE_PAWN_PUSH = 1,
    CAPTURE = 2,
    EN_PASSANT = 3, 
    K_CASTLE = 4, 
    Q_CASTLE = 5, 
    PROMOTION_N = 8, 
    PROMOTION_Q = 9, 
    PROMOTION_B = 10,
    PROMOTION_R = 11, 
    PROMOTION_CAN = 12, //CA means Capture And ... Other char belongs to piece
    PROMOTION_CAQ = 13, 
    PROMOTION_CAB = 14, 
    PROMOTION_CAR = 15
};

#endif
