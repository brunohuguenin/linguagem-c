#include <stdio.h>
#include <stdlib.h>

/*
    Leia um valor inteiro N. Apresente o uqadrado de cada um dos
    valores pares de 1 até N, inclusive N, se for o caso.
*/

int main()
{
    int inicio, valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);

    for(inicio = 2; inicio <= valor; inicio+=2)
        printf("%d ", inicio*inicio);
    printf("\n\n");

    return 0;
}
