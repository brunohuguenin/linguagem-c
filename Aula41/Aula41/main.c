#include <stdio.h>
#include <stdlib.h>

/*
    Aula41
    Verdadeiro ou falso
*/


int main()
{
     int a;

    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

    printf("\nResultado lógico se o valor é  positivo: %d", a < 0);

    if (a < 0) {
        printf("\nValor negativo\n");
    } else {
        printf("\nValor positivo\n");
    }
    printf("\n\nContinuacao do programa...\n\n");



    return 0;

}
