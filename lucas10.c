//inicio programa//
//declarar variables//
//pedir el valor por kilometro//
//leer el valor por kilometro//
//pedir la cantidad de kilometros recorridos//
//relizar operacion//
//decir el valor del boleto//
//retornar a 0 y cerrar programa//
#include <stdio.h>
int main ()
{
	int valorkilometro;
	float kilometros, valorboleto;
	
	printf("ingrese el valor por kilometro ");
	scanf("%d",&valorkilometro);
	printf("ingrese la cantidad de kilometros recorridos ");
	scanf("%f",&kilometros);
	valorboleto=(valorkilometro*kilometros);
	printf("el valor de su boleto es de: $%f",valorboleto);
	return 0;
}
	
	
