#include <stdio.h>
#include <stdlib.h>

/*
    Aula 85
    Fa�a um programa que pe�a ao usu�rio dois numeros inteiros e apresente o resultado
    da multiplica��o entre esses dois n�meros sem utilizar a opera��o de multiplica��o.
    2 x 3 = 6
    5 x 7 = 35

*/

int main()
{
    int valor1, valor2, i, acumulador = 0;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    for(i = 1; i <= valor2; i++) {
        acumulador += valor1;
    }
    printf("\nA multiplicaao entre %d e %d resulta em: %d\n\n", valor1, valor2, acumulador);
    return 0;
}
