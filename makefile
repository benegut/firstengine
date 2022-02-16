main: main.cpp bob.cpp engine.cpp input.cpp draw.cpp update.cpp
	g++ -Wall main.cpp bob.cpp engine.cpp input.cpp draw.cpp update.cpp -o main -lsfml-graphics -lsfml-window -lsfml-system
