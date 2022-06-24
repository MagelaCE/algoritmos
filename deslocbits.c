/* Um exemplo de deslocamento de bits */
#include <stdio.h>

void main(void)
{
    unsigned int i;
    int j;

    i = 1;

    /* deslocamentos à esquerda */
    for (j=0; j<4; j++) {
        i = i << 1;     /* desloca i de 1 à esquerda, que é o mesmo que multiplicar por 2 */
        printf("deslocamento à esquerda %d: %d\n", j, i);
    }

    /* deslocamentos à direita */
    for (j=0; j<4; j++) {
        i = i >> 1;     /* desloca i de 1 à deireita, que é o mesmo que dividir por 2 */
        printf("deslocamento à direita %d: %d\n", j, i);
    }
}