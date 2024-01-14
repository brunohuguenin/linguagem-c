#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Aula 122
    Faça um programa que imprima na tela a diagonal secundária de uma matriz 5x5
*/

int main()
{
    int tam = 7;
    int l, c, i, matriz[tam][tam];

    srand(time(NULL));

    printf("Matriz:\n");
    for(l=0; l<tam; l++){
        for(c=0; c<tam; c++){
            matriz[l][c] = rand() % 1000;
            printf("%3d ", matriz[l][c]);
        }
        printf("\n");
    }


    // Resolucao da aula
    printf("\nDiagonal Secundaria: \n");
    for(l=0; l<tam; l++){
        printf("%d ", matriz[l][tam -1 - l]);
    }

    printf("\n\n");

    return 0;
}
