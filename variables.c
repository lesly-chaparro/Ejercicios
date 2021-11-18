/*Uso de variables
Lesly Chaparro*/

#include <stdio.h>
#define vacio 0 //MACRO o constante

void main(){
    /*Para la variable: 
    Tipo de dato/Identificador-/valor inicial*/
    int piolin=0;
    /*Const int IVA 0.16
    Constante variable que no va a cambiar a lo largo de todo el programa*/
    int silvestre=0;

    printf("Mi variable piolin tiene el valor de %i",piolin);
    printf("\nMi variable silvestre tiene el valor de %i",silvestre);
    printf("\n\nMi variable vacio tiene el valor de %i",vacio);
    
    piolin=100;
    silvestre=200;
    printf("\n\nMi variable piolin tiene el valor de %i",piolin);
    printf("\nMi variable silvestre tiene el valor de %i",silvestre);

}