main: main.cpp
	@g++ main.cpp -o chessgame -lsfml-graphics -lsfml-window -lsfml-system 
	@./chessgame