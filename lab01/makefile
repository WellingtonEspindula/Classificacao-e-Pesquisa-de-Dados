############################# Makefile ##########################
all: lab1
lab1: utils.o sort.o main.o 
		# O compilador faz a ligação entre os dois objetos
		g++ -o lab1 Debug/utils.o Debug/sort.o Debug/main.o -g
utils.o: 
		g++ -o Debug/utils.o -c source/utils.cpp -W -Wall -pedantic -g
sort.o: 
		g++ -o Debug/sort.o -c source/sort.cpp -W -Wall -pedantic -g
main.o:
		g++ -o Debug/main.o -c source/main.cpp -W -Wall -pedantic -g
clean:
		rm Debug/*.o
run:	lab1 clean
		./lab1