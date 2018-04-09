//inicio del programa//
//declaracion de las variables//
//perid cateto 1//
//leer cateto 1//
//pedir cateto 2//
//leer cateto 2//
//realizar operacion//
//Decir el valor de la hipotenusa//
//retornar a 0//
//finaliza programa//

#include <stdio.h>
int main ()
 {
	int cateto1,cateto2,hipotenusa;
	printf("ingrese cateto1");
	scanf("%d",&cateto1);
	printf("ingrese cateto2");
	scanf("%d,",&cateto2);
	hipotenusa=((cateto1*cateto1)+(cateto2*cateto2));
	printf("la raiz de %d es la hipotenusa",hipotenusa);
	return 0;
}

	
