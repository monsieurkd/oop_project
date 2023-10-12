#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include "chessPieces.h"
#include <string>

enum class PieceColor { WHITE, BLACK, NONE };

class ChessPiece {
public:
    ChessPiece() : type(PieceType::EMPTY), color(PieceColor::NONE) {}
    ChessPiece(PieceType t, PieceColor c) : type(t), color(c) {}

    char getDisplayChar() const {
        if (type == PieceType::EMPTY) return ' ';

        char baseChar;
        switch (type) {
            case PieceType::KING: baseChar = 'K'; break;
            case PieceType::QUEEN: baseChar = 'Q'; break;
            case PieceType::ROOK: baseChar = 'R'; break;
            case PieceType::BISHOP: baseChar = 'B'; break;
            case PieceType::KNIGHT: baseChar = 'N'; break;
            case PieceType::PAWN: baseChar = 'P'; break;
            default: baseChar = ' '; break;
        }

        return (color == PieceColor::WHITE) ? baseChar : std::tolower(baseChar);
    }

private:
    PieceType type;
    PieceColor color;
};

class ChessBoard {
public:
    ChessBoard();

    void displayBoard();

private:
    static const int size = 8;
    ChessPiece board[8][8];
};

#endif // CHESSBOARD_H
