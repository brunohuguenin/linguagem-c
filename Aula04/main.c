#include <stdio.h>
#include <stdlib.h>


// Aula 04
// Lendo números inteiros


int main()
{
    int valor, valor2; // criei uma variavel para guardar um valor do tipo inteiro

    // atribuição -> atribuir um valor a uma variável

    valor = 50;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor); // Pra fazer referência a uma variável, é preciso usar o &

    printf("Digite um segundo valor inteiro: ");
    scanf("%d", &valor2); // Pra fazer referência a uma variável, é preciso usar o &
    // quando quiser chamar uma variavel que contenha inteiros, usa-se %d

    printf("\nO primeiro valor digitado foi: %d\n\n", valor);
    printf("\nE o segundo valor digitado foi: %d\n\n", valor2);
    return 0;
}
