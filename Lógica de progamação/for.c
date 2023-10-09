#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    int valor;

    for (i = 1; i <= 10; i++)
    {
        printf("Informe o %dª número: ", i);
        scanf("%d", &valor);
    }

    return 0;
}