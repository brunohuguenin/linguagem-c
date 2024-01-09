#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Aula 118
    Faça um programa que calcule e imprima a soma de todos os elementos
    de uma matriz 5 x 7
*/

int main()
{
    int matriz[5][7], i, j, soma = 0;

    srand(time(NULL));

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 7; j++)
            matriz[i][j] = rand() % 100;
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 7; j++){
            soma += matriz[i][j];
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");

    }

    printf("\nA soma da matriz 5 x 7 e igual a %d\n\n", soma);


    return 0;
}
