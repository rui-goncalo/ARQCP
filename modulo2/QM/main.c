#include "calcula_resto.h"
#include <stdio.h>

unsigned int numeros [10] = {0x0B0F0000,
	0x0C0A0000,
	0x0B080000,
	0x07100000,
	0x0F120000,
	0xF0E10000,
	0x0B0F0000,
	0x0A0B0000,
	0x0F100000,
	0x090F0000};
	
extern short numero_atual;

int main(void) {
	noves_fora(numeros, 10);
	return 0;
}

void noves_fora(unsigned int *numeros, int n) {
	unsigned char* charPtr = (unsigned char*)numeros;
	unsigned short* numPtr = (unsigned short*)numeros;
	numPtr++;
	
	for(int i = 0; i < n; i++){
		//Number
		numero_atual = *(numPtr+i*2);
		printf("%hu ### Resto = ", numero_atual);
		
		//Remainder
		*(charPtr + i * 4) = calcula_resto();
		printf("%hi\n", *(charPtr + i * 4));
	}
}
