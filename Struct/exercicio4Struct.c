#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct ficha_funcionario {
    char nome[200];
    char dataAdmissao[200];
    char matricula[200];
    char endereco[200];
};

struct ficha_cliente {
    char nome[200];
    char dataNascimento[200];
    char endereco[200];
};

int main () {
    setlocale (LC_ALL, "portuguese");

    struct ficha_funcionario funcionario[3];
    struct ficha_cliente cliente[3];
    int i;

        for (i = 0; i < 3; i++) {
        printf("Digite o nome do %dº funcionario: ", i + 1);
        gets (funcionario[i].nome);
        printf("Digite a Data de Admissão do %dº funcionario: ", i + 1);
        gets (funcionario[i].dataAdmissao);
        printf("Digite a matricula do %dº funcionario: ", i + 1);
        gets (funcionario[i].matricula);
        printf("Digite o Endereço do %dº funcionario: ", i + 1);
        gets (funcionario[i].endereco);
        system("cls || clear");  
        }

        for (i = 0; i <3; i++) {
        printf("Digite o nome do %dº cliente: ", i + 1);
        gets (cliente[i].nome);
        printf("Digite a Data de Nascimento do %dº Cliente: ", i + 1);
        gets (cliente[i].dataNascimento);
        printf("Digite o Endereço do %dº Cliente: ", i + 1);
        gets  (cliente[i].endereco);
    
        system("cls || clear");  
        fflush(stdin);
    }
    system("cls || clear");
    printf ("\nExibindo resultados...\n\n");
        for (i = 0; i < 3; i++) {
            printf ("Nome do %dº funcionario: %s\n",i + 1, funcionario[i].nome);
            printf ("Data de Admissão do %dº funcionario: %s\n",i + 1, funcionario[i].dataAdmissao);
            printf ("Matricula do %dº funcionario: %s\n", i + 1, funcionario[i].matricula);
            printf ("Digite o Endereço do %dº funcionario: %s\n", i + 1, funcionario[i].endereco);

            printf("\n");
        }
            printf("\n");
            
        for (i = 0; i < 3; i++) {
            printf ("Nome do %dº Cliente: %s\n", i + 1, cliente[i].nome);
            printf ("Data de Nascimento do %dº Cliente: %s\n", i + 1, cliente[i].dataNascimento);
            printf ("Endereço do %dº Cliente: %s\n", i + 1, cliente[i].endereco);
            printf("\n");
        }

    return 0;
}