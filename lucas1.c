//inicio del programa//
//Declaracion de las variables tipo int y tipo float//
//pedir al usuario su numero de matricula//
//leer el numero de matricula//
//pedir nota 1//
//leer nota 1//
//pedir nota 2//
//leer nota 2//
//perir nota 3//
//leer nota 3//
//calcular el promedio de las 3 notas//
//mostrar la matricula del alumno//
//mostrar el promedio obtenido por el alumno//
//retornar a 0//
//finaliza programa//

#include <stdio.h> 
int main ()
{
	int matricula;
	float nota1, nota2, nota3, promedio;
	printf("ingrese su numero matricula");
	scanf("%d",&matricula);
	printf("ingrese nota1");
	scanf("%f",&nota1);
	printf("ingrese nota 2");
	scanf("%f",&nota2);
	printf("ingrese nota 3");
	scanf("%f",&nota3);
	
	promedio=((nota1+nota2+nota3)/3);
	printf("la matricula numero %d",matricula);
	printf("el promedio del alumno es %f",promedio);
	
	return 0;
}
