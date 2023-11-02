#include <stdio.h>
#include <stdlib.h>

/*
    Aula 18
    Tamanho de um int na memória
    intervalo: -2.147.483.648   2.147.483.647
*/

int main()
{
    int x = 2147483647;

    printf("Valor de x: %d\n", x);
    x++;
    printf("Valor de x: %d\n", x);

    return 0;
}
