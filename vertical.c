#include <stdio.h>

void print_vertical(char *str);     /* protótipo */

void main(int argc, char *argv[])
{
    if(argc > 1) print_vertical(argv[1]);
}

void print_vertical(char *str)
{
    while (*str)
        printf("%c\n", *str++);
    
}