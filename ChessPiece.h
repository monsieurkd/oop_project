#ifndef CHESSPIECE_H
#define CHESSPIECE_H
#include <vector>

#include "Position.h"

enum class PieceType { ROOK, PAWN, KING, QUEEN, KNIGHT, BISHOP };

class ChessPiece {
 public:
  ChessPiece(PieceType type, Position position, bool isWhite);
  virtual ~ChessPiece();
  virtual bool isValidMove(
      Position newPosition,
      std::vector<std::vector<ChessPiece*>>& squares) const = 0;
  PieceType getType() const;
  bool isWhite() const;
  Position getPosition() const;
  void setPosition(Position newPosition);
  virtual void promoteTo(PieceType newType);

 protected:
  PieceType type;
  Position position;
  bool white;
};

#endif