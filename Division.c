/*DIVISIÓN ENTRE DOS NÚMEROS ENTEROS
CON ESTRUCUTRA IF - ELSE
clase 23-septiembre
Lesly Chaparro*/

#include <stdio.h>
//Declaración de variables
int num1;
int num2; 
int resultado;

int main(){
    //Interacción con el usuario
    printf("\n\tDIVISION ENTRE DOS NUMEROS\n");
    printf("\nDividendo: numero dentro de la casita\n");
    printf("Divisor: numero fuera de la casita");

    printf("\n\nDame el dividendo: ");
    scanf("%i",&num1);
    printf("\nDame el divisor: ");
    scanf("%i",&num2);

    //si el divisor/num2 = 0
    if (num2 == 0)
    {
        printf("\nLa division entre 0 no esta definida");
    }
    else
    {
        resultado = num1 / num2;
    printf ("\nEl resultado de %i entre %i es: %i", num1,num2,resultado);
    }
    
    printf("\n\n\tDIVISION COMPLETADA CORRECTAMENTE");
    return 0;
}