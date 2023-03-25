ex01: main.o asm.o
	gcc main.o asm.o -o ex01
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
asm.o: asm.s
	gcc -g -Wall -c asm.s -o asm.o
	
run: ex01
	./ex01

clean:
	rm *.o ex01
