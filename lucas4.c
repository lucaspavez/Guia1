//inicio del programa//
//delcaracion de las variables//
//pedir la altura//
//leer la altura//
//pedir la base//
//leer la base//
//realizar operacion//
//decir el perimetro del rectangulo y luego el area//
//retornar a 0//
//finaliza programa//
#include <stdio.h>
int main ()
{
	int base,altura,perimetro,area;
	printf("ingrese la altura");
	scanf("%d",&altura);
	printf("ingrese la base");
	scanf("%d",&base);
	perimetro=2*base+2*altura;
	area=base*altura;
	printf("el perimetro de su rectangulo es %d",perimetro);
	printf("el area de su rectangulo es %d",area);
	return 0;
	
}
