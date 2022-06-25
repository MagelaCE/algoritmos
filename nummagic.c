/* Programa de números mágicos #4. */
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int magic;  /* número mágico */
    int guess;  /* palpite do número */

    magic = rand();     /* gera o número mágico */

    printf("adivinhe o número mágico: ");
    scanf("%d", &guess);

    if (guess == magic) {
        printf("** Certo **");
        printf(" %d é número mágico\n", magic);
    }
    else 
        guess > magic ? printf("Alto") :printf("Baixo");
}