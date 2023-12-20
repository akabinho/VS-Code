#include <stdlib.h> 
#include <stdio.h>
#include <locale.h>

void cabecalho(){
    
    printf("=====================\n");
    printf("      SENAI DEN      \n");
    printf("=====================\n");

}

void limparTela(){

    system("cls");

} 

int somar(int pNumero, int sNumero){

    int somaNmrs;

    somaNmrs = pNumero + sNumero;
    return somaNmrs;

}

int multiplicar (int pNumero, int sNumero)
{
    int multiNmrs;

    multiNmrs = pNumero * sNumero;
    return multiNmrs;
}

int dividir (int pNumero, int sNumero)
{
    int diviNmrs;

    diviNmrs = pNumero / sNumero;
    return diviNmrs;
}

int subtrair (int pNumero, int sNumero)
{
    int subNmrs;

    subNmrs = pNumero - sNumero;
    return subNmrs;
}

int main(){
    setlocale(LC_ALL, "portuguese");

    int pNumero;
    int sNumero;
    int soma;
    int multiplicacao;
    int divisao;
    int subtracao;

    cabecalho();

    printf("\n");

    printf("Insira o primeiro n�mero: ");
    scanf("%d", &pNumero);
    limparTela();

    printf("Insira o segundo n�mero: ");
    scanf("%d", &sNumero);
    limparTela();

    soma = somar(pNumero, sNumero);

    multiplicacao = multiplicar(pNumero, sNumero);

    divisao = dividir(pNumero, sNumero);

    subtracao = subtrair(pNumero, sNumero);

    system("cls");

    printf("Calculando informa��es.\n");
    sleep(1);
    limparTela();
    printf("Calculando informa��es..\n");
    sleep(1);
    limparTela();
    printf("Calculando informa��es...\n");
    limparTela();

    cabecalho();

    printf("\n");
    printf("Primeiro n�mero: %d \n", pNumero);
    printf("Segundo n�mero: %d \n", sNumero);
    printf("\n");
    printf("Soma: %d \n", soma);
    printf("Multiplica��o: %d \n", multiplicacao);
    printf("Divis�o: %d \n", divisao);
    printf("Subtra��o: %d \n", subtracao);

    return 0;
}