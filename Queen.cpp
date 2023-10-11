#include "Queen.h"

Queen::Queen(Position position, bool isWhite)
    : ChessPiece(PieceType::QUEEN, position, isWhite) {}

bool Queen::isValidMove(Position newPosition,
                        std::vector<std::vector<ChessPiece*>>& squares) const {
  return true;
}
void Queen::promoteTo(PieceType newType) {
  // Implement queen promotion logic here
}