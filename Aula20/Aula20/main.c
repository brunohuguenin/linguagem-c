#include <stdio.h>
#include <stdlib.h>

/*
    Aula 20
    Tamanho de um float na memoria
    %f
*/

int main()
{
    long float x = 3.1415;

    printf("Um float precisa de %d bytes de memoria.\n", sizeof x);

    return 0;
}
