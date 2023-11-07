#include <stdio.h>
#include <stdlib.h>

/*
    Aula59
    Elabore um programa que, dado o número do mês, indica quantos dias têm esse mês.
    Obs.: Considere fevereiro com 28 dias
*/

int main()
{
    int option;
    printf("Choose the month you wanna know the number of days: \n");
    printf("1 - Jan\n2 - Fev\n3 - Mar\n4 - Abr\n5 - Mai\n6 - Jun\n7 - Jul\n8 - Ago\n9 - Set\n10 - Out\n11- Nov\n12 - Dez\nOption: ");
    scanf("%d", &option);

    switch(option) {
    case 1:
        printf("\nThe month of January has 31 days\n\n");
        break;
    case 2:
        printf("The month of February has 28 days\n\n");
        break;
    case 3:
        printf("\nThe month of March has 31 days\n\n");
        break;
    case 4:
        printf("\nThe month of April has 30 days\n\n");
        break;
    case 5:
        printf("\nThe month of May has 31 days\n\n");
        break;
    case 6:
        printf("\nThe month of June has 30 days\n\n");
        break;
    case 7:
        printf("\nThe month of July has 31 days\n\n");
        break;
    case 8:
        printf("\nThe month of August has 31 days\n\n");
        break;
    case 9:
        printf("\nThe month of September has 30 days\n\n");
        break;
    case 10:
        printf("\nThe month of October has 31 days\n\n\n\n");
        break;
    case 11:
        printf("\nThe month of November has 30 days\n\n");
        break
    case 12:
        printf("\nThe month of December has 31 days\n\n");
        break;
    default:
        printf("\nThe entered value does not match any month!\n\n");
    }

    return 0;
}
