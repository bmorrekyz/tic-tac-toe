all : driver.cpp TicTacNode.cpp TicTacToe.cpp TicTacTrie.cpp
	g++ -ansi -Wall -c driver.cpp TicTacNode.cpp TicTacToe.cpp TicTacTrie.cpp

proj1 : driver.o TicTacNode.o TicTacToe.o TicTacTrie.o
	g++ -ansi -Wall driver.o TicTacNode.o TicTacToe.o TicTacTrie.o -o driver.out 

run : 
	./driver.out $(FILE)

clean :
	rm -rf *.o
	rm -f *.out
	rm -f *~*.h.gch*#