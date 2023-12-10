#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int numero;

    // Solicita ao usuário que digite um número
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verifica a condição usando if, else if e else
    if (numero > 0) {
        printf("O numero e positivo.\n");
    } else if (numero < 0) {
        printf("O numero e negativo.\n");
    } else {
        printf("O número e zero.\n");
    }

    return 0;
}
