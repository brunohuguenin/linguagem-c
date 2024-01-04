#include <stdio.h>
#include <stdlib.h>

/*
    Aula 113- Exercício 03
    Escreva um programa que leia um vetor N de tamanho 20 e
    o imprima na tela. Em seguida, troque o 1º com o último,
    o 2º com o penúltimo, ... até 10º com o 11º. Imprima o vetor N modificado.

    índice:  0  1   2   3   4   5   6   7   8  9   10  11  12  13  14  15  16  17  18  19
    Vetor:  14 52  36  54  78  84  91  16  18  24  57  55  32  39  76  81  46  43  48  29
*/



int main() {

    int i, fim = 19, copia, vetor[20];

    for(i=0; i < 20; i++) {
        printf("Digite %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor original: ");
    for(i=0; i < 20; i++) {
        printf("%2d ", vetor[i]);
    }

    for(i = 0; i < 10; i++) {
        copia = vetor[i];
        vetor[i] = vetor[fim];
        vetor[fim] = copia;
        fim--;
    }

    printf("\nVetor modificado: ");
    for(i=0; i < 20; i++) {
        printf("%2d ", vetor[i]);
    }

    return 0;
}
