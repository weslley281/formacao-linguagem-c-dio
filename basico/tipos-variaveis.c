#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Exemplos de declaração de variáveis
    int numeroInteiro = 42;  // Variável inteira
    float numeroPontoFlutuante = 3.14;  // Variável de ponto flutuante
    char caractere = 'A';  // Variável de caractere
    double numeroDuplo = 123.456;  // Variável de ponto flutuante de dupla precisão

    // Exibindo os valores das variáveis
    printf("Número inteiro: %d\n", numeroInteiro);
    printf("Número de ponto flutuante: %f\n", numeroPontoFlutuante);
    printf("Caractere: %c\n", caractere);
    printf("Número duplo: %lf\n", numeroDuplo);

    system("pause");
    return 0;
}
