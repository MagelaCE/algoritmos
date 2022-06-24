/* Exemplo de cast */
#include <stdio.h>

void main(void)     /* imprime i e i/2 com frações */
{
    int i;

    for (i=1; i <=100; i++)
        printf("%d / 2 é: %f\n", i, (float) i / 2);
}