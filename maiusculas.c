#include <stdio.h>
#include <ctype.h>

void print_upper(char *string);

void main(void)
{
    char s[80];

    gets(s);
    print_upper(s);
}

/* imprime uma string em maiúsculas. */
void print_upper(char *string)
{
    register int t;

    for(t=0; string[t]; ++t) {
        string[t] = toupper(string[t]);
        putchar(string[t]);
    }
}