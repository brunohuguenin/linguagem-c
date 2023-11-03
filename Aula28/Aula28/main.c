#include <stdio.h>
#include <stdlib.h>

/*
    Aula 28
    operador de decremento --
*/

int main()
{
    int resultado, contador = 10;

    // sinônimas
    // contador--;
    // contador -= 1;
    // contador = contador - 1;

    printf("Valor: %d\n", contador--);

    printf("Depois do decremento: %d\n", contador);

    return 0;
}
