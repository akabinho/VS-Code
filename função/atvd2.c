#include <stdio.h>
#include <stdlib.h>

int resolver (int a)
{
    return a * 100;
}

int main()
{
    int num;

    printf("Digite um número:");
    scanf("%d", &num);

    printf("Valor em cm: %d", resolver(num));

    return 0;
}