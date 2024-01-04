#include <stdio.h>
#include <stdlib.h>

/*
    Aula 115
    Faça um programa que receba a temperatura média de cada mês do ano,
    armazene-as em um vetor. Ao final, mostre a maior e a menor temperatura do ano e
    em que mês ocorreram (mostrar o mês por extenso). Desconsidere empates.
*/

int main()
{
    int i, indiceMaior, indiceMenor;
    float temperatura[12], maiorTemp=0, menorTemp=999;

    for(i = 1; i <=12; i++) {
        printf("Digite a media de temperatura, em graus C, do mes %d: ", i);
        scanf("%f", &temperatura[i]);
    }

    for(i =1; i<=12; i++) {
        if(maiorTemp < temperatura[i]) {
            maiorTemp = temperatura[i];
            indiceMaior = i;
        }
        if(menorTemp > temperatura[i]) {
            menorTemp = temperatura[i];
            indiceMenor = i;
        }
    }

   printf("\nA maior temperatura foi de %.2f e ocorreu no mes de ", maiorTemp);
   switch(indiceMaior) {
        case 1:
            printf("janeiro");
            break;
        case 2:
            printf("fevereio");
            break;
        case 3:
            printf("marco");
            break;
        case 4:
            printf("abril");
            break;
        case 5:
            printf("maio");
            break;
        case 6:
            printf("junho");
            break;
        case 7:
            printf("julho");
            break;
        case 8:
            printf("agosto");
            break;
        case 9:
            printf("setembro");
        break;
        case 10:
            printf("outubro");
            break;
        case 11:
            printf("novembro");
            break;
        case 12:
            printf("dezembro");
            break;
    }

    printf("\nA menor temperatura foi de %.2f e ocorreu no mes de ", menorTemp);
   switch(indiceMenor) {
        case 1:
            printf("janeiro");
            break;
        case 2:
            printf("fevereio");
            break;
        case 3:
            printf("marco");
            break;
        case 4:
            printf("abril");
            break;
        case 5:
            printf("maio");
            break;
        case 6:
            printf("junho");
            break;
        case 7:
            printf("julho");
            break;
        case 8:
            printf("agosto");
            break;
        case 9:
            printf("setembro");
        break;
        case 10:
            printf("outubro");
            break;
        case 11:
            printf("novembro");
            break;
        case 12:
            printf("dezembro");
            break;
    }
    return 0;

}
