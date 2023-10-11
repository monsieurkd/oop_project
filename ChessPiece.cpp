#include "ChessPiece.h"

ChessPiece::ChessPiece(PieceType type, Position position, bool isWhite)
    : type(type), position(position), white(isWhite) {}

ChessPiece::~ChessPiece() {}

PieceType ChessPiece::getType() const { return type; }

bool ChessPiece::isWhite() const { return white; }

Position ChessPiece::getPosition() const { return position; }

void ChessPiece::setPosition(Position newPosition) { position = newPosition; }

void ChessPiece::promoteTo(PieceType newType) { type = newType; }
