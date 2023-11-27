#include <stdio.h>
#include <stdlib.h>

/*
    Aula 82
    Faça um programa que peça ao usuário um número inteiro maior que 2
     e diga se o número infomado é primo ou não
*/

int main()
{
    int numero;
    printf("Digite um numero maior que 2: ");
    scanf("%d", &numero);

    while(numero < 2) {
        printf("Numero Invalido!\nDigite um numero maior que 2: ");
        scanf("%d", &numero);
    }

    if(numero % 2 == 0 && numero % 3 == 0 || numero % 4 == 0)
        printf("O numero %d NAO E PRIMO.\n\n", numero);
    else
        printf("O numero %d E PRIMO.\n\n", numero);
    return 0;
}
