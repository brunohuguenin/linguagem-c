#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, e;
    int d;

    printf("Digite o valor total do consumo: R$ ");
    scanf("%f", &a);

    printf("\nA conta será dividida para quantas pessoas?: ");
    scanf("%d", &d);

    b = 0.10 * a;
    c = a + b;
    e = c / d;

    printf("\n\nValor do consumo R$%0.2f  \nGorjeta: R$ %0.2f", a, b);
    printf("\n\nValor que cada pessoa pagara: R$ %0.2f\n\n", e);


    return 0;
}
