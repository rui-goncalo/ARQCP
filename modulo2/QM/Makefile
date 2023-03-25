qm: main.o calcula_resto.o
	gcc main.o calcula_resto.o -o qm
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
calcula_resto.o: calcula_resto.s
	gcc -g -Wall -c calcula_resto.s -o calcula_resto.o
	
run: qm
	./qm

clean:
	rm *.o qm
