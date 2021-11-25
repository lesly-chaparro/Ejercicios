/*GENERACIONES
CON ESTRUCTURA ELSE IF
clase 23-septiembre
Lesly Chaparro*/

/*Generacion Z: 5-25
Millenials: 26-40
Generacion X: 41-55
Baby boomers: 56-75
Generacion del silencio: 76+*/

#include <stdio.h>

int main(){
    int edad=0;
    printf("Introduce tu edad [0-150]");
    scanf("%d",&edad);    
    if (edad>=0 && edad<=4)
    {
        printf("Tienes %d anios, perteneces a la generacion Y.",edad);
    }
    else if (edad>=5 && edad<=25)
    {
        printf("Tienes %d anios, perteneces a la generacion Z.",edad);
    }
    else if (edad>=26 && edad<=40)
    {
        printf("Tienes %d anios, perteneces a la generacion Millenial.",edad);
    }
    else if (edad>=41 && edad <=55)
    {
        printf("Tienes %d anios, perteneces a la generacion X.", edad);
    }
    else if (edad>=56 && edad<=75)
    {
        printf("Tienes %d anios, perteneces a la generacion Baby Boomer.", edad);
    }
    else if (edad>=76 && edad<=150)
    {
        printf("Tienes %d anios, perteneces a la generacion del silencio.", edad);
    }
    
    else
    {
        printf("Introduce una edad valida");
    }
    
    return 0;
}