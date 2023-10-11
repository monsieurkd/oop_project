#include "Rook.h"

Rook::Rook(Position position, bool isWhite)
    : ChessPiece(PieceType::ROOK, position, isWhite) {}

bool Rook::isValidMove(Position newPosition,
                       std::vector<std::vector<ChessPiece*>>& squares) const {
  return true;
}
