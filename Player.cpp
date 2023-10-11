#include "Player.h"

#include "King.h"
#include "Pawn.h"
#include "Rook.h"

Player::Player(bool isWhite, std::string name)
    : isWhitePlayer(isWhite), playerName(name), hasMadeRookKingSwap(false) {}

bool Player::hasRookKingSwap() const { return hasMadeRookKingSwap; }

void Player::setRookKingSwap(bool value) { hasMadeRookKingSwap = value; }

bool Player::makeMove(Position startPosition, Position endPosition,
                      Chessboard& board) {
  ChessPiece* piece = board.squares[startPosition.y][startPosition.x];

  // Check if the starting position contains a valid piece and it belongs to the
  // current player
  if (piece && piece->isWhite() == isWhitePlayer &&
      piece->isValidMove(endPosition, board.squares)) {
    // Check for rook-king swap condition
    if (!hasMadeRookKingSwap && piece->getType() == PieceType::ROOK) {
      // Check if the rook is being moved near the king
      int xDiff = abs(endPosition.x - startPosition.x);
      if (xDiff == 1) {
        // Swap the positions of the rook and king
        ChessPiece* king = board.squares[endPosition.y][endPosition.x];
        if (king && king->getType() == PieceType::KING &&
            king->isWhite() == isWhitePlayer) {
          // Perform the swap
          board.squares[startPosition.y][startPosition.x] = nullptr;
          board.squares[endPosition.y][endPosition.x] = piece;
          piece->setPosition(endPosition);
          board.squares[startPosition.y][startPosition.x] = king;
          king->setPosition(startPosition);

          // Update the hasMadeRookKingSwap flag
          hasMadeRookKingSwap = true;
          return true;
        }
      }
    }

    // If the rook-king swap condition is not met or already used, perform a
    // regular move
    if (piece->isValidMove(endPosition, board.squares)) {
      // Check if the move is valid
      if (board.movePiece(startPosition, endPosition)) {
        // Update the piece's position
        piece->setPosition(endPosition);

        // Check for pawn promotion
        if (piece->getType() == PieceType::PAWN &&
            (endPosition.y == 0 || endPosition.y == 7)) {
          // Automatically promote the pawn to a queen
          static_cast<Pawn*>(piece)->promote();
        }

        return true;
      }
    }
  }

  // Invalid move
  return false;
}
