#include <stdio.h>

int sqr(int x);

void main(void)
{
    int t = 10;

    printf("%d %d", sqr(t), t);
}

int sqr(int x)
{
    x = x*x;
    return x;
}