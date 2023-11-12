#include <stdio.h>
#include <stdlib.h>

/*
    Aula 63
    Faça um programa que, dado três valores a, b, c, verifique se eles podem ser os comprimentos
    dos lados de um triângulo. Caso positivo, seu programa deve informar também se o triângulo
    é equilátero, isósceles ou escaleno. Caso contrário, seu programa deve escrever a mensagem
    "Não formam um triângulo"
*/

int main()
{
    int a, b, c;

    printf("Insira três valores e descubra se formam ou nao um triangulo:\n");
    printf("Valor 1: ");
    scanf("%d", &a);
    printf("Valor 2: ");
    scanf("%d", &b);
    printf("Valor 3: ");
    scanf("%d", &c);

    if(a < b + c && b < a + c && c < a + b) {
        if ( a == b && a == c)
            printf("\nOs valores inseridos formam um TRIANGULO EQUILATERO.\n\n");
        else if (a == b || a == c || b == c)
            printf("\nOs valores inseridos formam um TRIANGULO ISOSCELES.\n\n");
        else
            printf("\nOs valores inseridos formam um TRIANGULO ESCALENO.\n\n");
    }
    else
        printf("\nOs valores inseridos NAO FORMAM TRIANGULO.\n\n");


    return 0;
}
