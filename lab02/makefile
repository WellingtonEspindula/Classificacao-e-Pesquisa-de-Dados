############################# Makefile ##########################
all: lab2
lab2: utils.o sort.o main.o 
		# O compilador faz a ligação entre os dois objetos
		g++ -O2 -o lab2 Debug/utils.o Debug/sort.o Debug/main.o -g
utils.o: 
		g++ -O2 -o Debug/utils.o -c source/utils.cpp -W -Wall -pedantic -g
sort.o: 
		g++ -O2 -o Debug/sort.o -c source/sort.cpp -W -Wall -pedantic -g
main.o:
		g++ -O2 -o Debug/main.o -c source/main.cpp -W -Wall -pedantic -g
clean:
		rm Debug/*.o
run:	lab2 clean
		./lab2