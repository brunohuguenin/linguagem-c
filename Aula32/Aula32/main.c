#include <stdio.h>
#include <stdlib.h>




int main()
{
    int a, b, c;

    printf("Digite dois valores: ");
    scanf("%d%d", &a, &b);

    printf("Os valores digitados: a: %d\tb: %d\n\n", a, b);

    // Dois baldes. Um com laranjas e o outro com maçãs.
    // Pra fazer a troca de frutas dos baldes pode-se usar um terceiro

    c = a;
    a = b;
    b = c;

    printf("Os valores alterados:\n a: %d\tb: %d\n\n\n", a, b);

    return 0;
}
