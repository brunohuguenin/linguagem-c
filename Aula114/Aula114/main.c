#include <stdio.h>
#include <stdlib.h>

/*
    Aula 114  Exercicio 04
    Uma pequena loja de artesanato possui apenas um vendedor e comercealiza 10 tipos de objetos diferentes.
    O vendedor recebe um salário de R$ 1100,00 acrescido de 5% do valor total de suas vendas. O valor unitário
    dos objetos deve ser informado e armazenado em um vetor; a quantidade vendida de cada objeto deve ficar em
    outro vetor, mas na mesma posição. Crie um programa que receba os precos e as quantidades vendidas, armazando-os
    em seus respectivos vetores. Depois, determine e mostre:

    a) A quantidade vendida, valor unitário e valor total de cada comissão que será paga ao vendedor.
    b) O valor do objeto mais vendido e sua posição no vetor (em caso de empates mostre todos empatados).
*/

int main()
{
    int quantidade[10], i;
    float valor[10],vendas, valorTotal = 0, comissao, maiorValor = 0;

    for(i=1; i<11; i++) {
        printf("Digite o valor unitario do objeto %d: R$ ", i);
        scanf("%f", &valor[i]);

    }

    for(i=1; i<11; i++) {
        printf("A quantidade de objeto %d que foi vendida: ", i);
        scanf("%d", &quantidade[i]);

    }

    for(i=1; i<11; i++){
        vendas = valor[i] * quantidade[i];
        valorTotal+= vendas;
    }

    // Resposta da letra A
    printf("\n\n");
    for(i=1; i<11; i++){
        printf("  Foi vendido %d do objeto %d de R$%.2f totalizando R$ %.2f\n", quantidade[i], i, valor[i], quantidade[i] * valor[i]);
    }
    /*
    printf("\n\n");
    comissao = valorTotal * 0.05;
    printf("--- Valor total das vendas R$%.2f\n--- Comissao total do vendedor R$%.2f", valorTotal, comissao);
    return 0;
    */

    // Resposta da letra B
    for(i =1; i<11; i++){
        if(maiorValor < quantidade[i])
            maiorValor = quantidade[i];
    }

    for(i =1; i<11; i++){
        if(quantidade[i] == maiorValor)
            printf("\n  Valor do objeto mais vendido R$%.2f, quantidade %d e sua posicao e %d.", valor[i], quantidade[i], i);
    }
}
