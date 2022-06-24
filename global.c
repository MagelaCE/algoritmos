// exemplo de variável global
#include <stdio.h>
int count;  /* count é global */

void func1(void);
void func2(void);

void main(void)
{
    count = 100;
    func1();
}

void func1(void)
{
    int temp;

    temp = count;
    func2();
    printf("count é %d", count);    /* imprimirá 100 */
}

void func2(void)
{
    int count;
    for (count=1; count<10; count++)
        putchar('.');
}