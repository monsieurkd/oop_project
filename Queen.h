#ifndef QUEEN_H
#define QUEEN_H
#include "ChessPiece.h"
#include "Position.h"

class Queen : public ChessPiece {
 public:
  Queen(Position position, bool isWhite);
  bool isValidMove(Position newPosition,
                   std::vector<std::vector<ChessPiece*>>& squares) const;
  void promoteTo(PieceType newType);
};

#endif
