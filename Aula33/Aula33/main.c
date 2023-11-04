#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Digite dois valores:\n");
    scanf("%d%d", &a, &b);
    /*
        x = 10
        y = 5

        x = x + y -> 15
        y = x - y -> 10
        x = x - y
    */

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Os valores modificados:\na: %d\nb: %d\n\n", a, b);
    return 0;
}
