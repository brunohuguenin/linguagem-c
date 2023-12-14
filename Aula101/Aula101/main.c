#include <stdio.h>
#include <stdlib.h>

/*
    Aula 101
    Como preencher um vetor por meio do teclado?
*/

int main()
{
    int i;
    int num2[4];

    for(i = 0; i < 4; i++) {
        printf("Digite o valor do vetor: ");
        scanf("%d", &num2[i]);
    }

    // for(i = 0; i < 10; i++) {
    //    printf("%d ", num2[i]);
    //}

    printf(num2[2]);

    return 0;
}
