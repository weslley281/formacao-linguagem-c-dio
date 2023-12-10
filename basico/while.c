#include <stdio.h>

int main() {
    int numero;

    // Inicializa o número com um valor positivo para iniciar o loop
    printf("Digite números inteiros (digite um número negativo para sair):\n");

    // Loop while
    while (1) {  // Loop infinito, você pode usar uma condição diferente se preferir
        // Solicita ao usuário para digitar um número
        printf("Digite um número: ");
        scanf("%d", &numero);

        // Verifica se o número é negativo para sair do loop
        if (numero < 0) {
            printf("Você digitou um número negativo. Saindo do loop.\n");
            break;  // Sai do loop
        }

        // Faz algo com o número (neste caso, apenas imprime)
        printf("Você digitou: %d\n", numero);
    }

    return 0;
}
