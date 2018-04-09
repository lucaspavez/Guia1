//abrir programa//
//declarar variables//
//pedir un numero//
//leer numero//
//realizar la operacion//
//decir el cuadrado y posteriormente el cubo de aquel numero//
//retornar a 0//
//finaliza programa//

#include <stdio.h>
int main ()
{
int numero,cuadrado, cubo;
 
printf("ingrese un numero");
scanf("%d",&numero);
cuadrado=(numero*numero);
cubo=(cuadrado*numero);
printf("el cuadrado del numero es %d",cuadrado);
printf("el cubo del numero es %d",cubo);

return 0;
}         
           
