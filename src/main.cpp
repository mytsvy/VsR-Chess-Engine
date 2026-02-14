#include <iostream>
#include "bitboard.hpp"


const char pieceChars[] = "PRNBQKprnbqk";

void printBoard() {
    std::cout << "\n       [ Black ]\n";
    std::cout << "  a b c d e f g h\n";
    std::cout << " +-----------------+\n";

    for (int rank = 7; rank >= 0; rank--) {
        std::cout << rank + 1 << "| "; 

        for (int file = 0; file < 8; file++) {
            int square = rank * 8 + file;
            char piece = '.';
            for (int i = 0; i < 12; i++) {
                if ((board.PiecesBB[i] >> square) & 1ULL) {
                    piece = pieceChars[i];
                    break; 
                }
            }
            std::cout << piece << " ";
        }
        std::cout << "| " << rank + 1 << "\n";
    }

    std::cout << " +-----------------+\n";
    std::cout << "  a b c d e f g h\n";
    std::cout << "       [ White ]\n\n";
}

int main() {
    initBoard(); 
    printBoard();     
    return 0;
}
