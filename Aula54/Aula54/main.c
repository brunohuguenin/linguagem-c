#include <stdio.h>
#include <stdlib.h>

/*
    Crie um programa que leia um n�mero e informe se ele � divisivel
    por 2, por 3 ou por 5, ou se n�o � divis�vel por nenhum deles
*/

int main()
{
    int valor;
    printf("Digite um numero: ");
    scanf("%d", &valor);

    if(valor % 2 == 0 || valor % 3 == 0 || valor % 5 == 0)
        printf("\nO valor digitado e divisivel por 2, por 3 ou por 5\n\n");
    else
        printf("\nO valor digitado e nao e divisivel por 2, por 3 ou por 5\n\n");

    return 0;
}
