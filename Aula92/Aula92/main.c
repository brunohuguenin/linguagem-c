#include <stdio.h>
#include <stdlib.h>

/*
    Aula 92
    Escreva um programa que gere a sa�da abaixo (10 linhas, 20 * por linha).
    Restri��es:
    -> A intru��o "printf" pode ser utilizada no m�ximo 2 vezes;
    -> O \n para saltar linha pode ser utilizado no m�ximo 1 vez
*/

int main()
{
    int i, j;

    for(i = 1; i <= 10; i++) {
        for(j = 1; j <= 20; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
