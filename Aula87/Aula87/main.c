#include <stdio.h>
#include <stdlib.h>


/*
    Aula 87
    Fa�a um programa que pe�a n�meros ao usu�rio. Quando o usu�rio digitar o n�mero
    0(zero) o programa deve imprimir na tela quantos n�meros positivos e negativos foram
    digitados.
*/

int main()
{
   int valor, valoresPositivos = 0, valoresNegativos = 0;

   do {
    printf("Digite um valor: ");
    scanf("%d", &valor);

    if(valor > 0)
        valoresPositivos++;
    if(valor < 0)
        valoresNegativos++;

   } while(valor != 0);

   printf("O usuario digitou %d numero(s) positivo(s) e %d negativo(s)\n\n", valoresPositivos, valoresNegativos);

    return 0;
}
