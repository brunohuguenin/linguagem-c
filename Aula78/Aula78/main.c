#include <stdio.h>
#include <stdlib.h>

/*
    Aula 78
    Faça um programa que calcule o valor de A, dado por:
    A = 1 + 2 + 3 + 4.... + N.
    Onde N é um número inteiro, maior que zero, informado pelo usuário.
*/

int main()
{
    int i, valor, A = 0;

    do {
        printf("Digite um valor: ");
        scanf("%d", &valor);
    } while(valor < 0);


    for(i = 1; i <= valor; i++) {
        A = A + i;
    }

     printf("%d", A);
    return 0;
}
