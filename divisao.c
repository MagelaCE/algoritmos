/* Divide o primeiro número pelo segundo. */
#include <stdio.h>

void main(void)
{
    int a, b;

    printf("Digite dois números: ");
    scanf("%d%d", &a, &b);

    if (b) printf("%d\n", a/b);
    else printf("não pode dividir por zero\n");
}