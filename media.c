//algoritmo media
#include <stdio.h>

void main()
{
    float n1, n2, media;
    printf("Digite 2 valores\n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    media = (n1 + n2) / 2;
    if (media >= 6)
        printf("Aprovado\n");
    else
        printf("Exame\n");
}