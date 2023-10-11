#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>

#include "ChessPiece.h"

class Player {
 public:
  Player(bool isWhite, std::string name);
  ~Player();
  void addPiece(ChessPiece* piece);
  void removePiece(ChessPiece* piece);
  bool makeMove(Position startPos, Position endPos, Chessboard& board);
  bool hasRookKingSwap() const;
  void setRookKingSwap(bool value);

 private:
  bool isWhitePlayer;
  std::string playerName;
  std::vector<ChessPiece*> pieces;
  bool hasMadeRookKingSwap;
};
