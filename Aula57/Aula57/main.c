#include <stdio.h>
#include <stdlib.h>

/*
    Aula57
    Faça um programa para ler um número inteiro e verificar se corresponde a um mês válido
    no calendário. Caso corresponda, escrever o nome do mÊs, caso contrário, escrever a
    mensagem 'Mês Inválido'
*/

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("\nO numero %d corresponde ao mes de JANEIRO.\n", num);
        break;
    case 2:
        printf("\nO numero %d corresponde ao mes de FEVEREIRO.\n", num);
        break;
    case 3:
        printf("\nO numero %d corresponde ao mes de MARCO.\n", num);
        break;
    case 4:
        printf("\nO numero %d corresponde ao mes de ABRIL.\n", num);
        break;
    case 5:
        printf("\nO numero %d corresponde ao mes de MAIO.\n", num);
        break;
    case 6:
        printf("\nO numero %d corresponde ao mes de JUNHO.\n", num);
        break;
    case 7:
        printf("\nO numero %d corresponde ao mes de JULHO.\n", num);
        break;
    case 8:
        printf("\nO numero %d corresponde ao mes de AGOSTO.\n", num);
        break;
    case 9:
        printf("\nO numero %d corresponde ao mes de SETEMBRO.\n", num);
        break;
    case 10:
        printf("\nO numero %d corresponde ao mes de OUTUBRO.\n", num);
        break;
    case 11:
        printf("\nO numero %d corresponde ao mes de NOVEMBRO.\n", num);
        break;
    case 12:
        printf("\nO numero %d corresponde ao mes de DEZEMBRO.\n", num);
        break;
    default:
            printf("\nO numero informado nao corresponde a nenhum mes do calendario\n\n");
    }


    return 0;
}
