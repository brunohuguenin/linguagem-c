#include <stdio.h>
#include <stdlib.h>


/*
    Aula 67
    Estrutura de repetição -> while() = enquanto
*/


int main()
{
    int valor;
    printf("Digite um valor entre 10 e 40: ");
    scanf("%d", &valor);

    while(valor < 10 || valor > 40) {
        printf("\nValor invalido!\nDigite um valor entre 10 e 40: ");
        scanf("%d", &valor);
    }

    printf("\nValor lido %d\n\n", valor);

    return 0;
}
