#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Aula 120
    Dada duas matrizes A e B 3x3, faça um programa para calcular a soma das
    matrizes e salvar em uma matriz C. Imprima as três matrizes.
*/

int main()
{
    int l, c, matrizA[3][3], matrizB[3][3], matrizC[3][3];

    srand(time(NULL));

    printf("Matriz A:\n");
    for(l=0; l<3; l++) {
        for(c=0; c<3; c++){
            matrizA[l][c] = rand() % 100;
            printf("%3d ",matrizA[l][c]);
        }
        printf("\n");
    }

    printf("\nMatriz B:\n");
    for(l=0; l<3; l++) {
        for(c=0; c<3; c++){
            matrizB[l][c] = rand() % 100;
            printf("%3d ",matrizB[l][c]);
        }
        printf("\n");
    }

    printf("\nA soma da Matriz A com a Matriz B:\n");
    for(l=0; l<3; l++) {
        for(c=0; c<3; c++){
            matrizC[l][c] = matrizA[l][c] + matrizB[l][c];
            printf("%3d ", matrizC[l][c]);
        }
        printf("\n");
    }

    printf("\n\n");

    return 0;
}
