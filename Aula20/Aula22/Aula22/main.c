#include <stdio.h>
#include <stdlib.h>

/*
    Aula 22
    operador long para o tipo double
    double -> %lf
    long double -> %lf

    __mingw_printf();
*/

int main()
{
   float x = 3.1415;

    long double y = 3.141554882658425252;

    printf("Um double precisa de %d bytes de memoria.\n", sizeof y);
    printf("Valor de y: %.10lf\n", y);

    printf("Um long double precisa de %d bytes de memoria\n", sizeof y);
    __mingw_printf("Valor de y: %.15Lf\n", y);

    return 0;
}
