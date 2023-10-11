#include "King.h"

King::King(Position position, bool isWhite)
    : ChessPiece(PieceType::KING, position, isWhite) {}

bool King::isValidMove(Position newPos,
                       std::vector<std::vector<ChessPiece*>>& squares) const {
  return true;
}