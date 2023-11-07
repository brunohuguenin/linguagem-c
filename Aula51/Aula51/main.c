#include <stdio.h>
#include <stdlib.h>

/*
    Aula51
    Estrutura de seleção switch case

    opções: - a = cadastrar produto
            - b = vender produto
            - c = buscar protudo
            - d = imprimir relatório
            - e = sair
*/

int main()
{
    char opcao;


    printf("Digite: \na - Cadastrar produto \nb - Vender produto \nc - Buscar produto \nd - imprimir prouto \ne - Sair\n\n-> ");
    scanf("%c", &opcao);

    switch(opcao) {
    case 'a':
        printf("Cadastrando produto...\n\n");
        break;
    case 'b':
        printf("Produto vendido.\n\n");
        break;
    case 'c':
        printf("Buscando produto...\n\n");
        break;
    case 'd':
        printf("Imprimindo o relatorio...\n\n");
        break;
    case 'e':
        printf("Programa encerrado.\n\n");
    default:
        printf("Opcao invalida!\n");
    }

    return 0;
}
