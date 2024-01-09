#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Aula 121
    Faça um programa que imprima na tela a diagonal principal de uma matriz 5x5
*/

int main()
{
    int tam = 5;
    int l, c, i, matriz[5][5], diagonalPrincipal[5];

    srand(time(NULL));

    printf("Matriz:\n");
    for(l=0; l<5; l++){
        for(c=0; c<5; c++){
            matriz[l][c] = rand() % 1000;
            printf("%3d ", matriz[l][c]);
        }
        printf("\n");
    }

    printf("\n");

    // Resolucao da aula
    for(l=0; l<tam; l++){
        for(c=0; c<tam; c++){
            if(l==c){
                printf("%d ", matriz[l][c]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }


    /*
    for(l=0; l<5; l++){
        for(c=0; c<5; c++){
            matriz[l][c] = matriz[l=l][c=c];
        }
    }

    for(i=0; i<5; i++){
        diagonalPrincipal[i] = matriz[i][i];
    }

    printf("\nDiagonal Principal da Matriz:\n");
    for(i=0; i<5; i++){
        printf("%d ", diagonalPrincipal[i]);
    }

    printf("\n\n");

    */
    return 0;
}
