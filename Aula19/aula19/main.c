#include <stdio.h>
#include <stdlib.h>

/*
    Aula19
    Operador long para o tipo int
    %li / %ld
*/

int main()
{
    long long int x = 2147483647;

    printf("Tamanho de x em bytes %d\n", sizeof x);

    printf("Valor de x: %lld\n", x);
    x++;
    printf("Valor de x: %lli\n", x);

    return 0;
}
