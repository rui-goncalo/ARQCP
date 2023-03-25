ex06: main.o asm.o
	gcc main.o asm.o -o ex06

main.o: main.c
	gcc -g -Wall -c main.c -o main.o

asm.o: asm.s
	gcc -g -Wall -c asm.s -o asm.o

run: ex06
	./ex06

clean:
	rm *.o ex06