#include <stdio.h>
#include <stdlib.h>

/*
    Aula 70
    Elabore um programa que leia um valor inteiro e apresente a tabuada
*/

int main()
{
    printf("=== TABUADA ===");

    /*
    int numero, valor;

    printf("\n\nDigite um numero: ");
    scanf("%d", &numero);

    for( valor > 0; valor <= 10; valor ++)
        printf("\n%d x %d = %d\n", valor, numero, valor*numero);
    */


    // Faça um programa que leia um numero e mostre a tabuada dele entre 1 e 10

    int numero, valor;

    printf("\n\nDigite um numero entre 1 e 10: ");
    scanf("%d", &numero);

    while(numero < 0 || numero > 10){
        printf("\nNumero invalido!\nDigite um numero: ");
        scanf("%d", &numero);
    }
    for( valor > 0; valor <= 10; valor ++)
        printf("\n%d x %d = %d\n", valor, numero, valor*numero);


    return 0;
}
