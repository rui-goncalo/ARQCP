ex: main.o preencher.o consumo.o
	gcc main.o preencher.o consumo.o -o ex
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
preencher.o: preencher.c
	gcc -g -Wall -c preencher.c -o preencher.o
	
consumo.o: consumo.s
	gcc -g -Wall -c consumo.s -o consumo.o
	
run: ex
	./ex

clean:
	rm *.o ex
