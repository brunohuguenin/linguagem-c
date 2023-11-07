#include <stdio.h>
#include <stdlib.h>

/*
    Aula50
    Estrutura de seleção switch case

    opções: - 1 = cadastrar produto
            - 2 = vender produto
            - 3 = buscar protudo
            - 4 = imprimir relatório
            - 0 = sair
*/

int main()
{
    int opcao;


    printf("Digite: \n1 - Cadastrar produto \n2 - Vender produto \n3 - Buscar produto \n4 - imprimir prouto \n0 - Sair\n\n-> ");
    scanf("%d", &opcao);

    switch(opcao) {
    case 1:
        printf("Cadastrando produto...\n\n");
        break;
    case 2:
        printf("Produto vendido.\n\n");
        break;
    case 3:
        printf("Buscando produto...\n\n");
        break;
    case 4:
        printf("Imprimindo o relatorio...\n\n");
        break;
    case 0:
        printf("Programa encerrado.\n\n");
    default:
        printf("Opcao invalida!\n");
    }

    return 0;
}
