#include <stdio.h>

int find_substr(char *s1, char *s2);

void main(void)
{
    if(find_substr("C é legal", "é") != -1)
        printf("a substring foi encontrada");
}

/* Devolve o índice de s1 em s2. */
int find_substr(char *s1, char *s2)
{
    register int t;
    char *p, *p2;

    for (t=0; s1[t]; t++) {
        p = &s1[t];
        p2 = s2;

        while (*p2 && *p2==*p) {
            p++;
            p2++;
        }
        if (!*p2) return t; /* 1o retorno */
    }
    return -1;  /* 2o retorno */
}