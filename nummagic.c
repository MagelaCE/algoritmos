/* Programa de números mágicos #3. */
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
    else {
        printf("Errado, ");
        if (guess > magic) printf("muito alto\n");
        else printf("muito baixo\n");
    }
}