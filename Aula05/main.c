#include <stdio.h>
#include <stdlib.h>
/*
    Aula 05
    Lendo números reais
*/

int main()
{
    float numeroReal = 2.71828; // para cortar casas decimais, é só colocar o número de casas que você quer depois da ','

    printf("Valor da minha variavel: %.2f\n", numeroReal); // para imprimir uma variavel com numero flutuante, precisa-se %f

    printf("Digite um numero real: ")/
    scanf("%f", &numeroReal);
    // quando quiser chamar uma variavel que contenha inteiros, usa-se %f

    printf("\nO valor digitado foi: %.2f", numeroReal);

    return 0;
}
