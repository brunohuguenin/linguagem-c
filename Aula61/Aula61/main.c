#include <stdio.h>
#include <stdlib.h>

/*
    Aula61
     Um usu�rio deseja um programa onde possa escolher que tipo de m�dia
     deseja calcular a partir de tr�s notas. Fa�a um programa que leia
     as notas e o tipo da m�dia escolhida pelo usu�rio e calcule a presente
     m�dia:

     a -> Aritm�tica
     p -> Ponderada (pesos: 3,3, 4)
*/

int main()
{
    int option;
    float valor1, valor2, valor3, resultado;

    printf("\t===== CALCULE SUA MEDIA ====\n\n");
    printf("Escolha:\n1 - Media Aritmetica\n2 - Media Ponderada\nOpcao: ");
    scanf("%d", &option);

    if(option != 1 && option != 2)
        printf("\nValor incorreto.\nPrograma Encerrado!\n\n");

    else {
    printf("\nDigite tres valores para saber a media escolhida:");
    printf("\nPrimeiro valor: ");
    scanf("%f", &valor1);
    printf("\Segundo valor: ");
    scanf("%f", &valor2);
    printf("\Terceiro valor: ");
    scanf("%f", &valor3);

        if(option == 1) {
        resultado = (valor1 + valor2 + valor3) / 3;
        printf("\nA Media Aritimetica e igual a: %0.2f\n\n", resultado);
        }
        else {
        resultado = (valor1*3 + valor2*3 + valor3*4) / 10;
        printf("\nA Media Ponderada e igual a: %0.2f\n\n", resultado);
        }
    }
    return 0;
}
