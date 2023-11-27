#include <stdio.h>
#include <stdlib.h>

/*
    Aula 77
    Escreva um que funcione como uma calculadora. O programa deve apresentar
    um menu da seguinte forma:
    1 - Somar
    2 - Subtrair
    3 - Multiplicar
    4 - Dividir
    0 - Sair
*/

int main()
{
    int valor1, valor2, opcao, operacao;
    printf("==== CALCULADORA ====");

    do {
            printf("\nEscolha a operacao que deseja realizar:\n");
            printf("1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n0 - Sair\nOpcao: ");
            scanf("%d", &opcao);
            while(opcao < 0 || opcao > 4) {
                printf("\tOpcao invalida!\nDigite novamente: ");
                scanf("%d", &opcao);
            }



            switch(opcao) {

            case 0:
                printf("Programa encerrado\n\n");
                break;
            case 1:
                printf("Digite o primeiro valor: ");
                scanf("%d", &valor1);
                printf("Digite o segundo valor: ");
                scanf("%d", &valor2);
                operacao = valor1 + valor2;
                printf("%d + %d = %d\n\n", valor1, valor2, operacao);
                break;
            case 2:
                printf("Digite o primeiro valor: ");
                scanf("%d", &valor1);
                printf("Digite o segundo valor: ");
                scanf("%d", &valor2);
                operacao = valor1 - valor2;
                printf("%d - %d = %d\n\n", valor1, valor2, operacao);
                break;
            case 3:
                printf("Digite o primeiro valor: ");
                scanf("%d", &valor1);
                printf("Digite o segundo valor: ");
                scanf("%d", &valor2);
                operacao = valor1 * valor2;
                printf("%d x %d = %d\n\n", valor1, valor2, operacao);
                break;
            case 4:
                printf("Digite o primeiro valor: ");
                scanf("%d", &valor1);
                printf("Digite o segundo valor: ");
                scanf("%d", &valor2);
                while(valor2 == 0) {
                    printf("\nImpossivel divir por zero!\nDigite o segundo valor: ");
                    scanf("%d", &valor2);
                }

                operacao = valor1 / valor2;
                printf("%d / %d = %d\n\n", valor1, valor2, operacao);
                break;
            default:
                printf("\n");
            }
    } while(opcao != 0);

    return 0;
}
