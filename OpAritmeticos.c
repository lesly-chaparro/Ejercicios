/*Operadores aritmeticos
Lesly Chaparro
++ Incremento
-- Decremento
- Resta
/ Division
* Multiplicacion
% modulo */

#include <stdio.h>
int main()
{
    int num1, num2;
    //Solo con un valor (num1)
    printf("\nEscribe el numero base: ");
    scanf("%d",&num1);
    printf("\n\tINCREMENTO CON UN SOLO VALOR\n");
    num1++; //postincremento
    printf("\t\tPostincremento (num1++): %d \n",num1);
    ++num1; //preincremento
    printf("\t\tPreincremento (++num1): %d \n",num1);

    /*Con ambos valores (num1 y num2)
    El num2 es solo de almacen de num1 */
    num2 =num1++;
    printf("\n\tINCREMENTO CON DOS VALORES\n");
    printf("\t\tPostincremento (num2=num1++): %d\n"); 
    num2 = ++num1;
    printf("\t\tPreincremento con ambos valores (num2=++num1): %d\n");
return 0;
}