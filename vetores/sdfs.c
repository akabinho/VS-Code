#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    
    int a;
    int numero;

    printf("Escolha o número:");
    scanf("%d", &numero);

    for (a = numero; a >= 1; a--)
    {
        printf("%d \n",a);
    }
    
    return 0;
}