/* Aloca espço para uma string dinamicamente, solicita
    a entrada do usuáruo e, em seguida, imprime a string de
    trás para frente. */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main(void)
{
    char *s;
    register int t;

    s = malloc(80);

    if(!s) {
        printf("Flaha na solicitação de memória.\n");
        exit(1);
    }

    gets(s);
    for (t=strlen(s)-1; t>=0; t--) putchar(s[t]);
    free(s);
}