#include <stdio.h>

float sum();    /* identifica a função */
float first, second;

void main(void)
{
    first = 123.33;
    second = 99.09;

    printf("%f", sum());
}

float sum()
{
    return first + second;
}