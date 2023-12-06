#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct ficha_funcionario {
    char nome[200];
    char idade[200];
    char CPF[200];
};

struct ficha_cliente {
    char nome[200];
    char idade[200];
    char CPF[200];
};

int main () {
    setlocale (LC_ALL, "portuguese");

    struct ficha_funcionario funcionario;
    struct ficha_cliente cliente;
    int i;
    
        printf("Digite o nome do funcionario: ");
        gets (funcionario.nome);
        fflush(stdin);
        printf("Digite a Idade do funcionario: ");
        gets (funcionario.idade);
        fflush(stdin);
        printf("Digite o CPF do funcionario: ");
        scanf ("%s", &funcionario.CPF);
        fflush(stdin);
        printf("Digite o nome do cliente: ");
        gets (cliente.nome);
        fflush(stdin);
        printf("Digite a Idade do Cliente: ");
        gets (cliente.idade);
        fflush(stdin);
        printf("Digite o CPF do cliente: ");
        scanf ("%s", &cliente.CPF);
        fflush(stdin);

    system("cls || clear");
    printf ("\nExibindo resultados...\n\n");

        printf ("Nome do funcionario: %s\n", funcionario.nome);
        printf ("Idade do funcionario: %s\n", funcionario.idade);
        printf ("CPF do funcionario: %s\n", funcionario.CPF);
        printf ("\n");

        printf ("Nome do Cliente: %s\n", cliente.nome);
        printf ("Idade do Cliente: %s\n", cliente.idade);
        printf ("CPF do cliente: %s\n", cliente.CPF);
        printf ("\n");

    return 0;
}