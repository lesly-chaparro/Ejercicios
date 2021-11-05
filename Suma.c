/*suma de dos numeros reales
Lesly Chaparro */

#include <stdio.h>
int main(void){
    //Declaracion de variables:
    int num1, num2, resultado;
    printf("Escribe el primer numero que deseas sumar: ");
    scanf("%d",&num1);
    printf("Escribe el segundo numero que deas sumar: ");
    scanf("%d",&num2);
    //Operacion:
    resultado = num1 + num2;
    //Impresion del resultado:
    printf("El resultado de la suma de %d + %d es: %d\n",num1, num2, resultado);
    return 0;
}