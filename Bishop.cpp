#include "Bishop.h"

Bishop::Bishop(Position position, bool isWhite)
    : ChessPiece(PieceType::BISHOP, position, isWhite) {}

bool Bishop::isValidMove(Position newPosition,
                         std::vector<std::vector<ChessPiece*>>& squares) const {
  return true;
}
