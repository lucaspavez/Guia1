//inicio de programa//
//declaracion de las variables//
//pedir el numero de dias//
//leer el numero de dias//
//realizar operacion//
//Decir la transformacion de dias a segundos//
//retornar a 0//
//finaliza programa//
#include <stdio.h>
int main ()
{
	int dias, segundos;
	
	printf("ingrese el numero de dias  ");
	scanf ("%d",&dias);
	segundos = (dias*84600);
	printf("la cantidad de dias ingresados corresponden a: %d segundos",segundos);
	return 0;
}
	
