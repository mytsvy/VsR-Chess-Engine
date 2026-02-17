#include "bitboard.hpp"

VsR::Board board;

void initBoard(){
    board.PiecesBB[W_PAWNS] |= ((1ULL<<8) - 1)<<8; // white pawns
    board.PiecesBB[W_ROOKS] |= ((1ULL<<7) | (1ULL<<0)); // white rooks
    board.PiecesBB[W_KNIGHTS] |= ((1ULL<<1) | (1ULL<< 6)); // white knights
    board.PiecesBB[W_BISHOPS] |= ((1ULL<<2) | (1ULL<<5)); // white bishops
    board.PiecesBB[W_QUEEN] |= (1ULL<<3); // white queen
    board.PiecesBB[W_KING] |= (1ULL<<4); //white king
    board.PiecesBB[B_PAWNS] |= ((1ULL<<8) - 1) << 48; // black pawns
    board.PiecesBB[B_ROOKS] |= ((1ULL<<56) | (1ULL<<63)); // black rooks
    board.PiecesBB[B_KNIGHTS] |= ((1ULL<<57) | (1ULL<<62)); // black knights
    board.PiecesBB[B_BISHOPS] |= ((1ULL<<58) | (1ULL<<61)); // black bishops
    board.PiecesBB[B_QUEEN] |= ((1ULL<<59)); //black queen
    board.PiecesBB[B_KING] |= ((1ULL<<60)); //black king
    
    board.All_PiecesBB[WHITE] = 0; //White pieces bitboard
    for(int i = 0; i<6; i++){board.All_PiecesBB[WHITE] |= board.PiecesBB[i];}

    board.All_PiecesBB[BLACK] = 0; //Black pieces bitboard
    for(int i = 6; i<12; i++){board.All_PiecesBB[BLACK] |= board.PiecesBB[i];}

    board.All_PiecesBB[BOTH] = board.All_PiecesBB[WHITE] | board.All_PiecesBB[BLACK]; //All PiecesBB
}


