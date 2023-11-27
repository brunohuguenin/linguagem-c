#include <stdio.h>
#include <stdlib.h>

/*
    Aula 75
    Faça um programa que imprima na tela todos os multiplos de 7
    entre 1 e 9999.
*/

int main()
{
    int multiplo = 7;

    for(multiplo = 7; multiplo <= 9999; multiplo += 7)
        printf("%d ", multiplo);

    return 0;
}
