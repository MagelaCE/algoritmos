/* Exemplo do operador ternário */
#include <stdio.h>

int f1(int n);
int f2(void);

void main(void)
{
    int t;

    printf("Digite um número: ");
    scanf("%d", &t);

    /* imprime a mensagem apropriada */
    t ? f1(t) + f2() : printf("foi digitado zero");
}

int f1(int n)
{
    printf("%d ", n);
    return 0;
}

int f2(void)
{
    printf("foi digitado");
    return 0;
}