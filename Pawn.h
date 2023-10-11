#ifndef PAWN_H
#define PAWN_H
#include "ChessPiece.h"
#include "Position.h"

class Pawn : public ChessPiece {
 public:
  Pawn(Position position, bool isWhite);
  bool isValidMove(Position newPosition,
                   std::vector<std::vector<ChessPiece*>>& squares) const;
  void promote();
};

#endif