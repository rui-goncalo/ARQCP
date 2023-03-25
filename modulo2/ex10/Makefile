ex10: main.o asm.o
	gcc main.o asm.o -o ex10

main.o: main.c
	gcc -g -Wall -c main.c -o main.o

asm.o: asm.s
	gcc -g -Wall -c asm.s -o asm.o

run: ex10
	./ex10

clean:
	rm *.o ex10