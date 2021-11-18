/*BOOLEANOS 
clase 13-septiembre-2021
Lesly chaparro*/

#include <stdio.h>
#include <stdbool.h>

// Se deben cumplir ambas condiciones

int main()
{
    //tipo de dato  identificador =valor;
    bool reprobado = true; // true / false

    /*
    Depende de lo que se haya especificado en el bool
    si (lo que está aqui) es verdadero/falso
    entonces printf...
    si no 
    entonces printf
    */

    if (reprobado){
        printf("Reprobaste el taller\n");
    } else {
        printf("Aprobaste con 6\n");
    }
    
}