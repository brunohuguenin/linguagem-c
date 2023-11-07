#include <stdio.h>
#include <stdlib.h>

/*
    Aula 56: Exercicio 05
    IMC - km/m²
    Escreva um programa que leia o peso e a altura de uma pessoa, calcule e mostre o IMC e a faixa
    em que o indivíduo se encontra de acordo com a tabela abaixo:

                IMC                        Interpretação
        Menor que 18,5                     Abaixo do peso
        Entre 18,5 e menor que 25          Peso normal
        Entre 25 e menor que 30            Sobrepeso
        Entre 30 e menor que 35            Obesidade grau 1
        Entre 35 e menor que 40            Obesidade grau 2
        Maior ou igual a 40                Obesidade grau 3
*/


int main()
{
    float massa_corporal, altura, imc;

    printf("\t==== CALCULE SEU IMC ====");
    printf("\n\nDigite sua Massa corporal em (kg): ");
    scanf("%f", &massa_corporal);
    printf("\nDigite sua altura em (m): ");
    scanf("%f", &altura);
    printf("----------------------------------------");

    imc = massa_corporal / (altura * altura);

    if(imc < 18.5)
        printf("\nSeu IMC e %0.2f o que siginifica que voce esta abaixo do peso.\n\n", imc);
    else if(18.5 <= imc && imc < 25)
        printf("\nSeu IMC e %0.2f o que siginifica que voce com o peso normal.\n\n", imc);
    else if(25 < imc && imc < 30)
        printf("\nSeu IMC e %0.2f o que siginifica que voce esta com sobrepeso.\n\n", imc);
    else if(30 < imc && imc < 35)
        printf("\nSeu IMC e %0.2f o que siginifica que voce esta com obesidade grau 1.\n\n", imc);
    else if(35 < imc && imc < 40)
        printf("\nSeu IMC e %0.2f o que siginifica que voce esta com obesidade grau 2.\n\n", imc);
    else if(imc == 40 || imc > 40)
        printf("\nSeu IMC e %0.2f o que siginifica que voce esta com obesidade grau 3.\n\n", imc);
    else
        printf("\n");


    return 0;
}
