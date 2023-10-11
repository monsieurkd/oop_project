#include "Pawn.h"

#include "Queen.h"

Pawn::Pawn(Position position, bool isWhite)
    : ChessPiece(PieceType::PAWN, position, isWhite) {}

bool Pawn::isValidMove(Position newPosition,
                       std::vector<std::vector<ChessPiece*>>& squares) const {
  // Implement pawn's move validation logic here
  // Check for promotion condition (reaching the top end of the board)
  if ((isWhite() && newPosition.y == 0) || (!isWhite() && newPosition.y == 7)) {
    return true;
  }
  return true;
}
void Pawn::promote() {
  // Implement Pawn promotion logic here
  type = PieceType::QUEEN;
}