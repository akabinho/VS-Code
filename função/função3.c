#include <stdio.h>
#include <stdlib.h>

void cabecalho()
{
    printf("\n===========================\n");
    printf("\t SENAI\n");
    printf("===========================\n");
}

int somar(int primeiroNumero, int segundoNumero)
{
    int somaNumeros;
    somaNumeros = primeiroNumero + segundoNumero;
    return somaNumeros;
}

int main()
{
    int primeiroNumero;
    int segundoNumero;
    int soma;

    cabecalho();
    
    printf("Digite o primeiro numero:");
    scanf("%d", &primeiroNumero);
    
    printf("Digite o segundo numero:");
    scanf("%d", &segundoNumero);

    soma = somar(primeiroNumero, segundoNumero);
    //soma = primeiroNumero + segundoNumero;

    cabecalho();
    printf("Primeiro numero: %d \n", primeiroNumero);
    printf("Segundo numero: %d \n", segundoNumero);
    printf("Soma: %d", soma);

    return 0;
}