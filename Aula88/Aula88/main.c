#include <stdio.h>
#include <stdlib.h>

/*
    Aula 88
    Foi feita uma pesquisa entre os habitantes de uma região e foram coletados
    os dados de idade, sexo (M/F) e salário de x pessoas (x deve ser informado
    usuário). Faça um programa que informe:
    a) a média de salário do grupo
    b) a maior e a menor idade do grupo;
    c) a quantidade de mulheres com salário ate R$2000,00
*/


int main()
{
    int idade, menorIdade = 999, maiorIdade = 0, i, quantidadePessoa, mulheresMais2k = 0;
    float salario, somaSalario = 0, mediaSalario;
    char sexo;

    printf("Quantas pessoas participaram da pesquisa? ");
    scanf("%d", &quantidadePessoa);

    for(i = 1; i <= quantidadePessoa; i++) {
        printf("\nIdade da %da pessoa: ", i);
        scanf("%d", &idade);
        printf("Sexo (m/f): ");
        scanf(" %c", &sexo);
        printf("Salario da %da pessoa: R$ ", i);
        scanf("%f", &salario);


        // a
        somaSalario += salario;

        // b
        if(menorIdade > idade)
            menorIdade = idade;
        if(maiorIdade < idade)
            maiorIdade = idade;

        if(sexo == 'f' && salario <= 2000)
            mulheresMais2k++;

    }

    mediaSalario = somaSalario/quantidadePessoa;

    printf("\nA media de salario do grupo e igual a R$%.2f", mediaSalario);
    printf("\nA maior idade do grupo e %d e a menor idade do grupo e %d\n", maiorIdade, menorIdade);
    printf("A quantidade de mulheres que ganham mais de R$2.000,00 e %d\n\n", mulheresMais2k);


    return 0;
}
