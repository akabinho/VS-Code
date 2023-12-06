#include <stdio.h>
#include <stdlib.h>

#define TAM 3

int quantidadePares(int vetor[]){
    int i, pares =  0;
    for(i = 0; i < TAM; i++){
        if (vetor[i] % 2 == 0){
            pares++;
        }
    }
    return pares;
}

int quantidadeImpares(int vetor[]){
    int i, impares = 0;
    for(i = 0;   i < TAM; i++){
        if(vetor[i] % 2 != 0){
            impares++;
        }
    }
    return impares;
}

int main()
{
    int numeros[TAM], i;
    int impares;

    for(i = 0; i < TAM; i++){
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    } 

    impares =  quantidadeImpares(numeros);

    printf("\nQuantidade de pares: %d \n", quantidadePares(numeros));
    printf("Quantidade de impares: %d \n", impares);

    return 0;
}