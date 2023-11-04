#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor;
    float dolar;

    printf("Digite um valor em Reais: R$ ");
    scanf("%f", &valor);
    dolar = valor / 5.30;

    printf("\n\nR$ %0.2f corresponde a U$ %0.2f\n\n", valor, dolar);
    return 0;
}
