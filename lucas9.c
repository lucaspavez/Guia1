//abrir programa//
//declarar variables//
//pedir el sueldo base//
//leer el sueldo base//
//pedir el total de ventas//
//leer el total de ventas//
//realizar operacion//
//decir la la comicion//
//decir su sueldo total//
//retornar a 0 y cerrar programa//
#include <stdio.h>
int main ()
{
	int sueldobase,ventas;
	float comision, sueldototal;
	
	printf("ingrese su sueldo base  ");
	scanf("%d",&sueldobase);
	printf("ingrese el total de ventas  ");
	scanf("%d",&ventas);
	
	comision = ventas*0.07;
	sueldototal = comision+sueldobase;
	
	printf("su comicion es de %f",comision);
	printf("su sueldo total es de $%f",sueldototal);

    return 0;
}
	

