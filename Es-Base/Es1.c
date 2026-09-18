#include <stdio.h>
#include <string.h>

int main() {

    char nome[100];

    printf("Nome: ");

    fgets(nome, 100, stdin);

    nome[strcspn(nome, "\n")] = '\0';
    printf("\nciao %s! Benvenuto in C.", nome);

    return 0;
}