#include <stdio.h>
#include <stdlib.h>

/*
    Aula 29
    operador unsigned
    trocar o %d por %u
    limite para o tipo int: 2.147.483.647
    unsigned short int %hu ou %d;
    unsigned long int %lu
*/

int main()
{
    unsigned int x = 2147483680;

    unsigned short int y = 55000;


    printf("Valor de x: %u\n", ++y);
    return 0;
}
