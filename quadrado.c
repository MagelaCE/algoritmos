/* Eleva ao quadrado preservando o sinal */
#include <stdio.h>

void main(void)
{
    int isqrd, i;

    printf("Digite um número: ");
    scanf("%d", &i);

    isqrd = i>0 ? i*i : -(i*i);

    printf("%d ao gradrado é %d", i, isqrd);
}