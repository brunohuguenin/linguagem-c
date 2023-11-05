#include <stdio.h>
#include <stdlib.h>

/*
    Aula48

    Operador lógico (||)
*/

int main()
{
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (5 >= idade || idade >= 75) {
        printf("Tem direito a gratuidade.\n\n");
    }
    else {
        printf("Nao tem direito a gratuidade.\n\n");
    }

    return 0;
}
