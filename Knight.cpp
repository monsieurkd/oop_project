#include "Knight.h"

Knight::Knight(Position position, bool isWhite)
    : ChessPiece(PieceType::KNIGHT, position, isWhite) {}

bool Knight::isValidMove(Position newPos,
                         std::vector<std::vector<ChessPiece*>>& squares) const {
  // Implement knight's move validation logic here
  return true;
}