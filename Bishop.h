#ifndef BISHOP_H
#define BISHOP_H
#include "Bishop.h"
#include "ChessPiece.h"

class Bishop : public ChessPiece {
 public:
  Bishop(Position position, bool isWhite);
  bool isValidMove(Position newPosition,
                   std::vector<std::vector<ChessPiece*>>& squares) const;
};

#endif
