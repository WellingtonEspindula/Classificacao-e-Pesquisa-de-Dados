############################# Makefile ##########################
all: lab4
lab4: hash.o utils.o main.o 
		# O compilador faz a ligação entre os dois objetos
		g++ -o lab4 Debug/hash.o Debug/utils.o Debug/main.o -g -O3 -std=c11
utils.o: 
		g++ -o Debug/utils.o -c source/utils.cpp -W -Wall -pedantic -g -O3 -std=c11
hash.o: 
		g++ -o Debug/hash.o -c source/hash.cpp -W -Wall -pedantic -g -O3 -std=c11
main.o:
		g++ -o Debug/main.o -c source/main.cpp -W -Wall -pedantic -g -O3 -std=c11
clean:
		rm Debug/*.o
run:	lab4 clean
		./lab4