#include <stdio.h>
#include <stdlib.h>

/*
    Aula43
    Operador tern�rio

    condi��o ? verdadeiro : falso
*/

int main()
{
   int a;

    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

    printf("\nOperador Ternario\n");

    a < 0 ? printf("\nValor negativo\n") : printf("\nValor positivo\n");

    printf("\n\nIF / ELSE\n");

    if (a < 0) {
        printf("\nValor negativo\n");
    } else {
        printf("\nValor positivo\n");
    }
    printf("\n\nContinuacao do programa...\n\n");


    return 0;
}
