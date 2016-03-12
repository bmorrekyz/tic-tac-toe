all : driver.cpp 
	g++ -ansi -Wall -c driver.cpp

proj1 : driver.o 
	g++ -ansi -Wall driver.o -o driver.out

run : 
	./driver.out $(FILE)

clean :
	rm -rf *.o
	rm -f *.out
	rm -f *~*.h.gch*#