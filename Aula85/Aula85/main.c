#include <stdio.h>
#include <stdlib.h>

/*
    Aula 85
    Faça um programa que peça ao usuário dois numeros inteiros e apresente o resultado
    da multiplicação entre esses dois números sem utilizar a operação de multiplicação.
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
