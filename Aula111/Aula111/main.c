#include <stdio.h>
#include <stdlib.h>

/*
    Aula 111 - Exercício 01
    Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores
    ao usuário. Em seguida, calcule e salve num segundo vetor o quadrado de cada
    elemento do primeiro vetor. Por fim, imprima os dois vetores.
*/

int main()
{
    int i, vetor1[10], vetor2[10];

    for(i = 0; i < 10; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor1[i]);

        vetor2[i] = vetor1[i] * vetor1[i];
    }

    printf("\nVetor 1:");
    for(i = 0; i < 10; i++){
        printf("%d ", vetor1[i]);
    }

    printf("\nVetor 2:");
     for(i = 0; i < 10; i++){
        printf("%d ", vetor2[i]);
    }


    printf("\n\n");
    return 0;
}
