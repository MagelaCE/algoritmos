/* adiciona espaços ao final de uma string até um comprimento pré-definido */
#include <stdio.h>
#include <string.h>

void pad(char *s, int lenght);

void main(void)
{
    char str[80];

    strcpy(str, "isto é um teste");
    pad(str, 40);
    printf("%d", strlen(str));
}

/* Acrescenta espaço ao final da string. */
void pad(char *s, int lenght)
{
    int l;

    l = strlen(s);      /* encontra o comprimento */

    while (l < lenght)
    {
        s[l] = ' ';     /* unsere um espaço */
        l++;
    }
    s[l] = '\0';        /* strings precisam terminar com um nulo */    
}