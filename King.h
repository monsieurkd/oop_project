#ifndef KING_H
#define KING_H
#include "ChessPiece.h"
#include "Position.h"

class King : public ChessPiece {
 public:
  King(Position position, bool isWhite);
  bool isValidMove(Position newPosition,
                   std::vector<std::vector<ChessPiece*>>& squares) const;
};

#endif
