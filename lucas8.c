//inicio de programa//
//declaracion de las variables//
//pedir el valor de x//
//leer el valor de x//
//realizar operacion//
//decir el resultado de dicha operacion//
//retornar a 0//
//finaliza programa//

#include <stdio.h>
int main ()
{
	float valorx, resultadox;
	
    printf("ingrese el valor de x  ");
    scanf("%f",&valorx);
    
    resultadox=((valorx*valorx*valorx)+(2*valorx*valorx)+(3*valorx)+5);
    
    printf("el resultado es %f",resultadox);
    
    return 0;
}
