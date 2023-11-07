#include <stdio.h>
#include <stdlib.h>

/*
    Aula 49

    Else if encadeados
*/

int main()
{
    int a;

    printf("Digite um valor qualquer: ");
    scanf("%d", &a);

    if(a < 0) {
        printf("Valor digitado e negativo\n\n");
    }
    else if (a == 0){
        printf("Valor digitado e igual a zero\n\n");
    }
    else {
        printf("Valor digitado e positivo\n\n");
    }

    return 0;
}
