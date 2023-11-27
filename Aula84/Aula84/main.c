#include <stdio.h>
#include <stdlib.h>

/*
    Aula 84
    Faça um programa que calcule a média de salários de
    um empresa, pedindo ao usuário a quantidade de funcionários e
    o salário de cada funcionário. Ao final, o programa deve imprimir
    a média dos salários informados, o salário mais alto e o salário
    mais baixo.
*/

int main()
{
    int quantidade, i;
    float salario, totalSalarios = 0, salarioMaior = 0, salarioMenor = 99999;

    do {
        printf("Quantos funcionarios a empresa possui? ");
        scanf("%d", &quantidade);
    } while(quantidade < 0);

    for(i = 1; i <= quantidade; i++) {
        printf("%d salario: ", i);
        scanf("%f", &salario);

        totalSalarios += salario;

        if(salarioMenor > salario)
            salarioMenor = salario;
        if(salarioMaior < salario)
            salarioMaior = salario;
    }
    printf("\nSlario medio R$%.2f\n", totalSalarios/quantidade);
    printf("Maior salario R$%.2f\n", salarioMaior);
    printf("Menor salario R$%.2f\n\n", salarioMenor);

    return 0;
}
