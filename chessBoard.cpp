#include "chessBoard.h"
#include <iostream>

void ChessBoard::displayBoard() {

    const int size = 8;   // standard chessboard size
    const int squareWidth = 6;  // adjust for desired square width
    const int squareHeight = 3; // adjust for desired square height

    const int consoleWidth = 80;  // assuming console width of 80 characters
    const int boardWidth = size * squareWidth + 4;  // +2 for left numbers, +2 for vertical borders
    const int padding = (consoleWidth - boardWidth) / 2;

    const int verticalPadding = 2;  // space above and below the board

    // Add space above the board
    for (int i = 0; i < verticalPadding; i++) {
        std::cout << std::endl;
    }

    // Top border
    for (int p = 0; p < padding; ++p) {
        std::cout << " ";
    }
    std::cout << "  " << char(0xC9);
    for (int j = 0; j < size * squareWidth; j++) {
        std::cout << char(0xC4);
    }
    std::cout << char(0xBB) << "  " << std::endl;

    for (int i = 0; i < size; ++i) {
        for (int h = 0; h < squareHeight; h++) {
            for (int p = 0; p < padding; p++) {
                std::cout << " ";
            }

            // Adjust the row numbers (8 to 1) to the center of the square
            if (h == squareHeight / 2 - 1) {
                std::cout << (8 - i) << " ";
            } else {
                std::cout << "  ";
            }

            std::cout << char(0xB3);

            for (int j = 0; j < size; j++) {
                if ((i + j) % 2 == 0) {
                    for (int w = 0; w < squareWidth; w++) {
                        std::cout << " ";
                    }
                } else {
                    for (int w = 0; w < squareWidth; w++) {
                        std::cout << char(0xDB);
                    }
                }
            }

            std::cout << char(0xB3);
            std::cout << "  " << std::endl;
        }
    }

    // Bottom border
    for (int p = 0; p < padding; ++p) {
        std::cout << " ";
    }
    std::cout << "  " << char(0xC8);
    for (int j = 0; j < size * squareWidth; ++j) {
        std::cout << char(0xC4);
    }
    std::cout << char(0xBC) << std::endl;

    // Print characters (a-h) centered below the board
    for (int p = 0; p < padding + 1; ++p) {
        std::cout << " ";
    }
    for (char c = 'a'; c <= 'h'; ++c) {
        std::cout << std::string((squareWidth + 1) / 2 - 1 , ' ') << c << std::string(squareWidth / 2, ' ');
    }
    std::cout << std::endl;

    // Add space below the characters
    for (int i = 0; i < verticalPadding; ++i) {
        std::cout << std::endl;
    }


};

