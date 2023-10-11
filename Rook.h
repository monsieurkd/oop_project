#ifndef ROOK_H
#define ROOK_H
#include "ChessPiece.h"
#include "Position.h"

class Rook : public ChessPiece {
 public:
  Rook(Position position, bool isWhite);
  bool isValidMove(Position newPos,
                   std::vector<std::vector<ChessPiece*>>& squares) const;
};
#endif
