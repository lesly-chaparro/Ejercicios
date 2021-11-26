/* MENÚ TELEFÓNICO DE ATENCIÓN A CLIENTES 
CON ESTRUCTURA SWITCH - CASE
clase 27-septiembre
Lesly Chaparro*/

#include<stdio.h>
int main(){
    //Declaracion de variables
    int opcion;

    //Interacción con el usuario
    printf("\nBienvenido a nuestro centro telefonico de atencion al cliente");
    printf("\n\n\t\t\tMENU");
    printf("\n\t1. Hablar con un ejecutivo");
    printf("\n\t2. Realizar el pago de tu factura");
    printf("\n\t3. Conocer el saldo de tu cuenta");
    printf("\n\t4. Salir");
    printf("\n\nElige una opcion [1-4]: ");
    scanf("%i",&opcion);

    //Programa
    switch(opcion){ 
    case 1:
        printf("\n\nPor favor espere en la linea,\nen un momento lo atendera un ejecutivo");
        break;
    case 2:
        printf("\n\n\t\tMENU");
        printf("\n\tA) Pago de servicio con tarjeta de débito o crédito.");
        printf("\n\tB) Consulta de saldo.");
        printf("\n\tC) Hablar con uno de nuestros ejecutivos.");
        printf("\n\tD) Salir");
        printf("Por favor escoja una opción: ");
        break;
    case 3:
        printf("\n\nEl saldo de tu cuenta es de $0.00 MXN");
        break;
    case 4:
        printf("\n\nMuchas gracias por su visita al centro telefonico.\nVuelva pronto.");
        break;
    default:
        printf("\nPor favor inserte una opcion valida");
    }
    return 0; 
}