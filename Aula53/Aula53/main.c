#include <stdio.h>
#include <stdlib.h>

/*
    Aula 53
    Escreva um programa que leia 5 números inteiros, um por vez. Conte
    quantos destes valores são negativos e quantos são positivos. Ao final,
    imprima na tela a quantidade de números negativos e positivos
*/

int main()
{
    int  a, b, c, d, e, positivo = 0, negativo = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    printf("Digite o quarto numero: ");
    scanf("%d", &d);

    printf("Digite o quinto numero: ");
    scanf("%d", &e);

    if(a > 0)
        positivo+= 1;
    else
        negativo+= 1;
    if(b > 0)
        positivo+= 1;
    else
        negativo+= 1;
    if(c > 0)
        positivo+= 1;
    else
        negativo+= 1;
    if(d > 0)
        positivo+= 1;
    else
        negativo+= 1;
    if(e > 0)
        positivo+= 1;
    else
        negativo+= 1;

    printf("\nO usuario digitou %d numeros positivos e %d numeros negativos.\n\n", positivo, negativo);

    return 0;
}
