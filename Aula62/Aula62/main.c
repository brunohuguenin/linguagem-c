#include <stdio.h>
#include <stdlib.h>

/*
    Aula 63
    Fa�a um programa que, dado tr�s valores a, b, c, verifique se eles podem ser os comprimentos
    dos lados de um tri�ngulo. Caso positivo, seu programa deve informar tamb�m se o tri�ngulo
    � equil�tero, is�sceles ou escaleno. Caso contr�rio, seu programa deve escrever a mensagem
    "N�o formam um tri�ngulo"
*/

int main()
{
    int a, b, c;

    printf("Insira tr�s valores e descubra se formam ou nao um triangulo:\n");
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
