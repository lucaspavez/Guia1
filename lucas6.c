//inicio del programa//
//declaracion de las variables//
//pedir la cantidad de galones//
//leer la cantidad de galones//
//realizar la operacion//
//decir el precio de la cantidad de galones//
//retornar a 0//
//finaliza programa//

#include <stdio.h>
int main ()
{
	float precio,litros,galones;
	
	printf("Ingrese la cantidad de galones  ");
	scanf("%f",&galones);
	
	
	litros = galones*3785;
	precio = litros*820;
	
	printf("El precio de la cantidad de galones es $%f ",precio);
	
	return 0;
}
	
	
