#include <stdio.h>
#include "function_jurossimples.c"

int main() {
    printf("Testando juros simples:\n");

    printf("J(100, 0.5, 10) = %.2f\n", calcularJuros(100, 0.5, 10));    // Esperado: 500.00
    printf("J(100, 0.25, 12) = %.2f\n", calcularJuros(100, 0.25, 12));  // Esperado: 300.00
    printf("J(100, 0.75, 5) = %.2f\n", calcularJuros(100, 0.75, 5));    // Esperado: 375.00

    printf("Criado por Thiago Bonfanti Guimarães");
    return 0;
}
