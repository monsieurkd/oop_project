#include <iostream>

int main() {

    const int size = 8;   
    const int squareWidth = 6; 
    const int squareHeight = 3; 

    const int consoleWidth = 80;  // assuming console width 
    const int boardWidth = size * squareWidth + 4;  // +2 for left numbers, +2 for vertical borders
    const int space = (consoleWidth - boardWidth) / 2;

    const int space = 2;  // intialise space above and below 

    // Add space above the board
    for (int i = 0; i < space; i++) {
        std::cout << std::endl;
    }

    // Top border
    for (int p = 0; p < space; p++) {
        std::cout << " ";
    }
    std::cout << "  " << char(0xC9);
    for (int j = 0; j < size * squareWidth; j++) {
        std::cout << char(0xC4);
    }
    std::cout << char(0xBB) << "  " << std::endl;

    for (int i = 0; i < size; i++) {
        for (int h = 0; h < squareHeight; h++) {
            for (int p = 0; p < space; p++) {
                std::cout << " ";
            }

            // Add nums
            if (h == squareHeight / 2 - 1) {
                std::cout << (8 - i) << " ";
            } else {
                std::cout << "  ";
            }

            std::cout << char(0xB3); // Bordering

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

            //Bordering
            std::cout << char(0xB3);
            std::cout << "  " << std::endl;
        }
    }

    // Bottom border
    for (int p = 0; p < space; p++) {
        std::cout << " ";
    }
    std::cout << "  " << char(0xC8);
    for (int j = 0; j < size * squareWidth; j++) {
        std::cout << char(0xC4);
    }
    std::cout << char(0xBC) << std::endl;

    // Print characters (a-h) centered below the board
    for (int p = 0; p < space + 1; p++) {
        std::cout << " ";
    }
    for (char c = 'a'; c <= 'h'; c++) {
        std::cout << std::string((squareWidth + 1) / 2 - 1 , ' ') << c << std::string(squareWidth / 2, ' ');
    }
    std::cout << std::endl;

    // Add space below 
    for (int i = 0; i < space; i++) {
        std::cout << std::endl;
    }

    return 0;
}

