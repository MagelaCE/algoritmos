#include <stdio.h>
#include <string.h>

char *p = "alo mundo";

void main(void)
{
    register int t;

    /* imprime o contéudo d string de trás para frente */
    printf(p);
    for (t=strlen(p)-1; t>-1; t--) printf("%c", p[t]);
}