// imprime um traço para cada espaço em uma string
#include <stdio.h>

void sp_to_dash(const char *str);

void main(void)
{
    sp_to_dash("isso é um teste");
}

void sp_to_dash(const char *str)
{
    while(*str) {
        if (*str == ' ') printf("%c", '-');
        else printf("%c", *str);
        str++;
    }
}