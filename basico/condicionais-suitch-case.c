#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char operacao;

    // Solicita ao usuário que escolha uma operação
    printf("Escolha uma operacao: +, -, *, /: ");
    scanf(" %c", &operacao);

    // Verifica a operação usando a instrução switch
    switch (operacao) {
        case '+':
            printf("Você escolheu adição.\n");
            break;
        case '-':
            printf("Você escolheu subtração.\n");
            break;
        case '*':
            printf("Você escolheu multiplicação.\n");
            break;
        case '/':
            printf("Você escolheu divisão.\n");
            break;
        default:
            printf("Operacao invalida.\n");
    }

    return 0;
}