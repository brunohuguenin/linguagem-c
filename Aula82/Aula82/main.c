#include <stdio.h>
#include <stdlib.h>

/*
    Aula 82
    Fa�a um programa que pe�a ao usu�rio um n�mero inteiro maior que 2
     e diga se o n�mero infomado � primo ou n�o
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
