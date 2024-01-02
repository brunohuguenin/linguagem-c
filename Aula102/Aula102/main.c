#include <stdio.h>
#include <stdlib.h>

/*
    Aula 102
*/

int main()
{

    int i;
    int num2[4];

    for(i = 0; i < 4; i++) {
        printf("Digite o valor do vetor: ");
        scanf("%d", &num2[i]);
    }

    for(i = 0; i < 4; i++){
        num2[i] = num2[i] * 7;
    }


    printf("\n\n");
     for(i = 0; i < 4; i++) {
        printf("%d ", num2[i]);
    }

    printf("\n\n");


    return 0;
}
