#include <stdio.h>
#include <stdlib.h>

/*
    Aula 55
    Crie um programa que permita a conversao de Real para Dólar ou de Dólar
    para Real. Utiliza como taxa de câmbio $1 igual a R$ 5,30
*/

int main()
{
    float valor, real, dolar;
    int opcao;
    printf("Conversor de moeda - BRL  e USD\n");
    printf("Digite o valor que deseja converter: ");
    scanf("%f", &valor);
    printf("0 - para converter para Real.\n");
    printf("1 - para converter para Dolar.\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    real = valor * 5.30;
    dolar = valor / 5.30;

    if(opcao == 0)
        printf("$%0.2f equivale a R$%0.2f\n\n", valor, real);
    else if(opcao == 1)
         printf("R$%0.2f equivale a $%0.2f\n\n", valor, dolar);
    else
        printf("Opcao invalida!");

    return 0;
}
