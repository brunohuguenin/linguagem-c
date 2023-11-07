#include <stdio.h>
#include <stdlib.h>
/*
    Aula60
    Diminua o numero de linhas do exercício anterior
    "Elabore um programa que, dado o número do mês, indica quantos dias têm esse mês.
    Obs.: Considere fevereiro com 28 dias"
*/

int main()
{
    int option;
    printf("Choose the month you wanna know the number of days: \n");
    printf("1 - Jan\n2 - Fev\n3 - Mar\n4 - Abr\n5 - Mai\n6 - Jun\n7 - Jul\n8 - Ago\n9 - Set\n10 - Out\n11- Nov\n12 - Dez\nOption: ");
    scanf("%d", &option);

    switch(option) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("\nThe month has 31 days\n\n");
        break;
    case 2:
        printf("The month has 28 days\n\n");
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        printf("\nThe month of April has 30 days\n\n");
        break;
    default:
        printf("\nThe entered value does not match any month!\n\n");
    }


    return 0;
}
