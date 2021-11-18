/*Área de un círculo 
Lesly Chaparro*/

#include <stdio.h>
#include <math.h>
#define PI 3.1416

int main(void){
    float area, radio; //float: tipo de dato que le cabe una cantidad muy grande
    printf("Introduce el radio del circulo: ");
    scanf("%f",&radio); //%F: tipo de daot float.
    area = PI * pow(radio,2); //Operacion: PI x radio^2
    printf("%s%f\n\n", "Area del circulo: ", area);
    return 0;
}