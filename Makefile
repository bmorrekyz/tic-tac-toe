all : driver.cpp TicTacNode.cpp TicTacToe.cpp
	g++ -ansi -Wall -c driver.cpp TicTacNode.cpp TicTacToe.cpp 

proj1 : driver.o TicTacNode.o TicTacToe.o
	g++ -ansi -Wall driver.o TicTacNode.o TicTacToe.o -o driver.out 

run : 
	./driver.out $(FILE)

clean :
	rm -rf *.o
	rm -f *.out
	rm -f *~*.h.gch*#