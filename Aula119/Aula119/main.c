#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Aula 119
    Crie um programa que preencha uma matriz 5x10 com números inteiros.
    Em seguida:
    a) Some cada uma das linhas armazenando o resultado em um vetor;
    b) Some cada uma das colunas armazenando o resultado em um vetor;
    c) Imprima a matriz e os dois vetores identificando qual é a soma das linhas
    e qual é a soma das colunas
*/

int main()
{
    int matriz[5][10], l, c, somaLinha[5], somaColuna[10], soma;

    srand(time(NULL));

    for(l=0; l<5; l++) {
        for(c=0; c<10; c++)
            matriz[l][c] = rand() % 10 ;
    }

    // letra a) soma das linhas
    for(l=0; l<5; l++){
        soma = 0;
        for(c=0; c<10; c++){
            soma += matriz[l][c];
        }
        somaLinha[l] = soma;
    }

    // letra b) soma das colunas
    for(c=0; c<10; c++){
        soma =0;
        for(l=0; l<5; l++){
            soma += matriz[l][c];
        }
        somaColuna[c] = soma;
    }


    // letra c)
     for(l=0; l<5; l++) {
        for(c=0; c<10; c++)
            printf("%2d ", matriz[l][c]);

        printf("\n");
    }

    printf("\n\nVetor com a soma das linhas: \n");
    for(l=0; l<5; l++)
        printf("Linha %d: %d\n", l, somaLinha[l]);


    printf("\n\nVetor com a soma das colunas: \n");
    for(c=0; c<10; c++)
        printf("Colunas %d: %d\n", c, somaColuna[c]);


    return 0;
}
