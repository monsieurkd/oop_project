#ifndef KNIGHT_H
#define KNIGHT_H
#include "chessPiece.h"

enum class PieceType { ROOK, PAWN, KING, QUEEN, KNIGHT, BISHOP };

struct Position {
  int x;
  int y;
};

class knight : public ChessPiece {
 public:
  knight(Position position, bool isWhite);
  bool isValidMove(Position newPos,
                   std::vector<std::vector<ChessPiece*>>& squares) const;
};

#endif
