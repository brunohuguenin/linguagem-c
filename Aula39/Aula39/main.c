#include <stdio.h>
#include <stdlib.h>

/*
    Aula 39
    Decis�o simples

    Verificando se um n�mero � negativo

    Bras�lia � a capital do Brasil ?
*/

int main()
{
    int a;

    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

    if (a < 0) {
        printf("\nValor negativo\n");
    } else {
        printf("\nValor positivo\n");
    }
    printf("\n\nContinuacao do programa...\n\n");

    return 0;
}
