#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Aula 124
    Faça um programa que imprima na tela apenas os valores abaixo
    da diagonal principal de uma matriz 4x4.
*/


int main()
{
    int matriz[6][6], l, c;

    srand(time(NULL));

    printf("Matrix 4x4:\n\n");

    for(l=0; l<6; l++) {
        for(c=0; c<6; c++) {
            matriz[l][c] = rand() % 100;
            printf("%3d ", matriz[l][c]);
        }
        printf("\n");
    }

     printf("\n\nValores Abaixo da Diagonal Principal da Matrix 6x6:\n");

    for(l=0; l<6; l++) {
        for(c=0; c<6; c++) {
            if(l  > c )  {
                printf("%3d ", matriz[l][c]);
            }
            else {
                printf("  ");
            }

        }
        printf("\n");
    }

    return 0;
}
