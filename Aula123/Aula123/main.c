#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Aula 123
    Faça um programa para calcular a transposta de uma matriz 5x4.
    Imprima as duas matrizes na tela.
*/


int main()
{
    int matriz[5][4], c, l, transposta[4][5];

    srand(time(NULL));

    printf("Matriz A:\n\n");
    for(l=0; l<5; l++) {
        for(c=0; c<4; c++) {
            matriz[l][c] = rand() % 100;
            printf("%3d ", matriz[l][c]);
            transposta[c][l] = matriz[l][c];
        }
        printf("\n");
    }

    printf("\n\nMatriz Transposta de A:\n\n");
    for(l=0; l<4; l++) {
        for(c=0; c<5; c++) {
            printf("%3d ", transposta[l][c]);
        }
        printf("\n");
    }


    return 0;
}
