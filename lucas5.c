//inicio de programa//
//declaracion de variables//
//pedir el nombre del dinosaurio//
//leer el nombre del dinosaurio//
//pedir los pies del dinosaurio//
//leer los pies del dinosaurio//
//pedir las libras del dinosaurio//
//leer las libras del dinosaurio//
//realizar operacion//
//decir el peso del dinosaurio//
//decir la longitud del dinosaurio//
//retornar a 0//
//finaliza programa//

#include <stdio.h>
int main ()
{
	char dinosaurio[1000];
	float librasdino;
	float piesdinosaurio;
	float peso;
	float longitud;
	float libra=0.45;
	float pies=0.3048;
	
	printf("Dele un nombre a su dinosaurio: ");
	scanf("%s",&dinosaurio[1000]);
	printf("¿Cuantos pies mide su dinosaurio?: ");
	scanf("%f",&piesdinosaurio);
	printf("¿Cuantas libras pesa el dinosaurio?: ");
	scanf("%f",&librasdino);
	longitud=(piesdinosaurio*pies);
	peso=librasdino*libra;
	printf ("El peso de su dinosaurio es : %f",peso);
	printf (" La longitud de su dinosaurio es: %f",longitud);
	
	return 0;
}
	
	
