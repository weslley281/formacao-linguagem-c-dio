#include <stdio.h>

int main() {
    // Defina um array de números
    int numeros[] = {1, 2, 3, 4, 5};

    // Calcula o tamanho do array
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    // Itera sobre o array usando um loop for
    printf("Elementos do array:\n");
    for (int i = 0; i < tamanho; ++i) {
        printf("%d\n", numeros[i]);
    }

    return 0;
}
