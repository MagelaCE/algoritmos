#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    if (argc!=2) {
        printf("Você esqueceu de digitar seu nome.\n");
        exit(1);
    }
    printf("Ola %s", argv[1]);
}