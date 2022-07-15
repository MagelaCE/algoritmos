#include <stdio.h>
#include <string.h>

void main(void)
{
    char str[80];

    gets(str);
    printf("o comprimento é %ld", strlen(str));
}