#include <stdio.h>
#include <stdlib.h>

int main()
{
    float diaria = 45;
    float imposto;
    float total, dias;

    printf("Dias trabalhados pelo encanador: ");
    scanf("%f", &dias);

    dias = diaria * dias;
    imposto =  0.08 * dias;
    total = dias - imposto;

    printf("Valor total de diarias: R$ %0.2f", dias);
    printf("\nValor a ser pago ao encanador descontado o imposto: R$ %0.2f\n\n", total);
    return 0;
}
