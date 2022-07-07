#include <stdio.h>

char *match(char c, char *s);   /* protótipo */

void main(void)
{
    char s[80], *p, ch;
    gets(s);
    ch = getchar();
    p = match(ch, s);

    if (*p)     /* encontrou */
        printf("%s ", p);
    else
        printf("Não encontrei.");
}

/* Devolve um ponteiro para a primeira ocorrência de c em s */
char *match(char c, char *s)
{
    while(c != *s && *s) s++;
    return(s);
}