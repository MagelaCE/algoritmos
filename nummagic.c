/* Programa de números mágicos #2. */
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int magic;  /* número mágico */
    int guess;  /* palpite do número */

    magic = rand();     /* gera o número mágico */

    printf("adivinhe o número mágico: ");
    scanf("%d", &guess);

    if (guess == magic) printf("** Certo **");
    else printf("Errado");
}