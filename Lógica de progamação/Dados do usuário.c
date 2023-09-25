#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Inicializando variáveis.
    int idade = 0;
    int peso = 0;
    char sexo;
    char nome [250];

    // solicitando dados do usuário.
    printf("Digite sua idade:");
    scanf("%d", &idade);

    printf("Digite seu peso:");
    scanf("%.2f", &peso);

    fflush(stdin); // Limpa o cache de input.

    printf("Digite seu sexo:");
    scanf("%c", &sexo);

    fflush(stdin); // Limpa o cache de input.

    printf("Digite seu nome:");
    //scanf("%s", nome);
    //fgets(nome, 250, stdin);
    gets(nome);
    

    // Exibindo dados do usuário.
    printf("Idade: %d \n", idade);
    printf("Peso: %.2f \n", peso);
    printf("Nome: %s \n", nome);
    printf("Sexo: %c \n", sexo);

    return 0;
}