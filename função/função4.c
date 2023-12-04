#include <stdio.h>
#include <stdlib.h>

void cabecalho()
{
    printf("\n===========================\n");
    printf("\t LINGUAGEM C\n");
    printf("===========================\n");
}

float cacularMedia(int a, int b)
{
    float media;
    media = (a + b) / (float)  2;
    
    return media;
}

int main()
{
    int primeiroNumero;
    int segundoNumero;
     
    cabecalho();
    
    printf("Digite o primeiro numero:");
    scanf("%d", &primeiroNumero);
    
    printf("Digite o segundo numero:");
    scanf("%d", &segundoNumero);

    cabecalho();
    printf("Primeiro numero: %d \n", primeiroNumero);
    printf("Segundo numero: %d \n", segundoNumero);
    printf("media: %.2f \n", cacularMedia(primeiroNumero + segundoNumero));

    return 0;
}