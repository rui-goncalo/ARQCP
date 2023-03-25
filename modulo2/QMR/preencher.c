#include <stdio.h>
#include "consumo.h"

unsigned char potencia = 0, horas = 0, id = 0;

extern unsigned char id_max_consumo;

void preenche_consumos(unsigned int* radiadores, int n){
	unsigned char* ptr = (unsigned char*)radiadores;
	unsigned char max = 0;
	
	for(int i = 0; i < n; i++){
		//Defines the value of the global variables
		id = *(ptr + i*4);                 //Least significant 8 bit
		horas = *(ptr + 1 + i*4);          //The next 8 bit
		potencia = *(ptr + 2 + i*4);       //The next 8 bit
		
		//Assigns the return value of the assembly function
		*(ptr + 3 + i*4) = consumo();      //The most significant 8 bit
		
		printf("potencia = %d / horas = %d\n", horas, potencia);
		printf("expected %d / actual = %d\n", (potencia*horas) / 1000, *(ptr + 3 + i*4));
		
		//Checks if the return value from the assembly function
		// is bigger than the previous max value and assigns a
		// new id_max_consumo if that is the case.
		if(max < *(ptr + 3 + i*4)){
			max = *(ptr + 3 + i*4);
			id_max_consumo = id;
		}
	}
	
	//Prints the ID of the radiator with the most power consumption
	printf("\nid_max_consumo = %d\n\n", id_max_consumo);
}
