#include <stdio.h>
#include "consumo.h"

unsigned int radiadores[5] = {0x0010A5DC,
	0x0020F7D0,
	0x003079C4,
	0x004125DC,
	0x00510BB8};

int main(void) {
	preenche_consumos(radiadores, 5);
	return 0;
}
