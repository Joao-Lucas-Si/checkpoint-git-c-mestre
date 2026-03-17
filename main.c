#include <stdio.h>

int main()
{
    char* joaoRibeiroNome = "joao pedro ribeiro santos";
    char* joaoPedroNome = "Joao Pedro Evangelista de Almeida";
    char* EnzoribeiroNome = "Enzo Ribeiro";
    char* joaoLucasNome = "João Lucas Silva Lopes";
    char* AlanNome = "Alan Otalvaro Ramirez";

    char *nomes[5] = {
        joaoRibeiroNome,
        joaoPedroNome,
        EnzoribeiroNome,
        joaoLucasNome,
        AlanNome
    };
    int idades[5] = {
        18,
        18,
        19,
        20,
        21
    };

    for (int i = 0; i < 5; i++)
    {
        printf("nome: %s, idade: %d\n", nomes[i], idades[i]);
    }

    return 0;
}