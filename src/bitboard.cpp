#include "bitboard.hpp"

Board board;

void initBoard(){
    board.PiecesBB[0] |= ((1ULL<<8) - 1)<<8; // white pawns
    board.PiecesBB[1] |= ((1ULL<<7) | (1ULL<<0)); // white rooks
    board.PiecesBB[2] |= ((1ULL<<1) | (1ULL<< 6)); // white knights
    board.PiecesBB[3] |= ((1ULL<<2) | (1ULL<<5)); // white bishops
    board.PiecesBB[4] |= (1ULL<<3); // white queen
    board.PiecesBB[5] |= (1ULL<<4); //white king
    board.PiecesBB[6] |= ((1ULL<<8) - 1) << 48; // black pawns
    board.PiecesBB[7] |= ((1ULL<<56) | (1ULL<<63)); // black rooks
    board.PiecesBB[8] |= ((1ULL<<57) | (1ULL<<62)); // black knights
    board.PiecesBB[9] |= ((1ULL<<58) | (1ULL<<61)); // black bishops
    board.PiecesBB[10] |= ((1ULL<<59)); //black queen
    board.PiecesBB[11] |= ((1ULL<<60)); //black king
    
    board.All_PiecesBB[0] = 0; //White pieces bitboard
    for(int i = 0; i<6; i++){board.All_PiecesBB[0] |= board.PiecesBB[i];}

    board.All_PiecesBB[1] = 0; //Black pieces bitboard
    for(int i = 6; i<12; i++){board.All_PiecesBB[1] |= board.PiecesBB[i];}

    board.All_PiecesBB[2] = board.All_PiecesBB[0] | board.All_PiecesBB[1]; //All pieces
}
