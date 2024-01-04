#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Aula 112- Exercício 02
    Faça um programa que some o conteúdo de dois vetores de tamanho 25
    e armazene o resultado em um terceiro vetor. Imprima os três vetores na tela.
*/


int main()
{
    int i, vetor1[25], vetor2[25], vetor3[25];

    srand(time(NULL));
     for(i = 0; i < 25; i++) {
        vetor1[i] = rand() % 100;
        vetor2[i] = rand() % 100;

        vetor3[i] = vetor1[i] + vetor2[i];
     }

     printf("\nVetor 1: ");
     for(i = 0; i < 25; i++){
        printf("%3d ", vetor1[i]);
     }

     printf("\nVetor 2: ");
     for(i = 0; i < 25; i++){
        printf("%3d ", vetor2[i]);
     }

     printf("\nVetor 3: ");
     for(i = 0; i < 25; i++){
        printf("%3d ", vetor3[i]);
     }

    return 0;
}
