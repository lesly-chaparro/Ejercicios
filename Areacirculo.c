#include <stdio.h>
#include <math.h>
#define PI 3.1416

/*Área de un círculo 
Lesly Chaparro*/

int main(){
    float area, radio; //float: tipo de dato que le cabe una cantidad muy grande
    printf("Introduce el radio del circulo: ");
    scanf("%f",&radio); //%F: tipo de daot float.
    area = PI * pow(radio,2); //Operacion, radio^2
    printf("%s%f\n\n", "Area del circulo: ",area);
}