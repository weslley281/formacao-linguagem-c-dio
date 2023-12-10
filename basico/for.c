#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário para digitar um número
    printf("Digite um número para ver a tabuada: ");
    scanf("%d", &numero);

    // Imprime a tabuada usando um loop for
    printf("Tabuada do %d:\n", numero);
    for (int i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
