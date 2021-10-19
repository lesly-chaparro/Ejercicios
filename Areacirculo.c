#include <stdio.h>
#include <math.h>
#define PI 3.1416

/*Área de un círculo 
Lesly Chaparro*/

int main(){
    float area, radio; //Declaracion de variables
    radio = 5; //Asignacion de valores, radio vale 5
    area = PI * pow(radio,2); //Operacion, radio^2
    printf("%s%f\n\n", "Área del círculo con radio 5: ", area);
}