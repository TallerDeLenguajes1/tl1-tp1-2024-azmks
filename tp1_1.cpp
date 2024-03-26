#include <stdio.h>

int main ()
{
    printf("Hola mundo");

    int a = 12;
    int * punt_a = &a;

    printf("\nEl contenido del puntero es: %d", *punt_a);
    printf("\nLa direccion almacenada por el puntero es: %p", punt_a);
    printf("\nLa direccion de memoria de la variable es: %p", &a);
    printf("\nLa direccion de memoria del puntero es: %p", &punt_a);
    printf("\nEl tamano de memoria utilizado por la variable es: %d bytes", sizeof(a));

    return 0;
}