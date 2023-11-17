#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int tamanho = 5;
    int i, v[tamanho];
    int par = 0, impar = 0;
    int maior = 0;
    int menor = 9999;
    float mediaimp = 0;
    float mediap = 0;
    int somapar = 0;
    int somaimpar = 0;
    int negativo = 0;
    int positivo = 0;

    for ( i = 0 ; i < tamanho; i++)
    {
        printf("Digite os numeros:");
        scanf("%d", &v[i]);
        if (v[i] % 2 == 0) {
            par++;
            somapar = somaimpar + v[i];
        }else
        {
            impar++;
            somaimpar = somapar - v[i];
        }
        if (v[i] > maior) {
            maior = v[i];
        }
        if (v[i] < menor){
            menor = v[i];
        }
        if (v[i]>0)
        {
            positivo++;
        } if (v[i]<0) {
            negativo++;
        }
    }
    printf("\nquantidade de numeros pares: %d \n", par);
    printf("\nquantidade de numeros impares: %d \n ", impar);
    printf("\nquantidade de numeros positivos: %d \n", positivo);
    printf("\nquantidade de numeros negativos: %d \n", negativo);
    printf("\nquantidade de numeros inseridos: %d \n", i);
    printf("\nNumero maior: %d \n", maior);
    printf("\nNumero menor> %d \n", menor);
    printf("\nMedia dos numeros pares: %f\n", mediap);
    printf("\nMedia dos numeros impares: %f\n", mediaimp);
    printf("\nMedia total dos numeros: %f\n");
    for (i = 4; i>=0; i--)
    {
        printf("numeros na ordem inversa: %d\n", v[i]);
    }
    
    return 0;
}