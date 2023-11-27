#include <stdio.h>
#include <stdlib.h>

/*
    Aula 84
    Fa�a um programa que calcule a m�dia de sal�rios de
    um empresa, pedindo ao usu�rio a quantidade de funcion�rios e
    o sal�rio de cada funcion�rio. Ao final, o programa deve imprimir
    a m�dia dos sal�rios informados, o sal�rio mais alto e o sal�rio
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
