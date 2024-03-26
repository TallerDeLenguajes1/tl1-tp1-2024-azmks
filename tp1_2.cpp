#include <stdio.h>

int cuadrado(int num);
void cuadradoNum(int * num);
void mostrarVariable(int * num);
void invertir(int * a, int * b);
void orden(int * a, int * b);

int main()
{
    int a = 15, b =7;
    
    printf("\nMostramos la variable a: ");
    mostrarVariable(&a);

    cuadradoNum(&a);
    printf("\nElevamos a al cuadrado: a = %d", a);

    printf("\na = %d - b = %d", a, b);
    orden(&a, &b);
    printf("\nUtilizamos la funcion orden(a,b)");
    printf("\na = %d - b = %d", a, b);

    invertir(&a, &b);
    printf("\nUtilizamos la funcion invertir(a,b)");
    printf("\na = %d - b = %d", a, b);

    return 0;
}

int cuadrado(int num)
{
    int cuadrado;
    cuadrado = num * num;
    return cuadrado;
}

void cuadradoNum(int * num)
{
    *num *= *num;
}

void mostrarVariable(int * num)
{
    printf("\nLa variable recibida es: %d", *num);
    printf("\nLa direccion de la variable es: %p", num);
}

void invertir(int * a, int *  b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int * a, int * b)
{
    if (*a > *b)
    {
        int aux;
        aux = *a;
        *a = *b;
        *b = aux;
    }
}