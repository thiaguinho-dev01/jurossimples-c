#include <stdio.h>
#include "function_jurossimples.c"

int main() {
    double capital, taxa, tempo;

    printf("Digite o capital inicial: ");
    scanf("%lf", &capital);

    printf("Digite a taxa de juros (em decimal, ex: 0.10 para 10%%): ");
    scanf("%lf", &taxa);

    printf("Digite o tempo: ");
    scanf("%lf", &tempo);

    double juros = calcularJuros(capital, taxa, tempo);
    double montante = capital + juros;

    printf("Juros (J): %.2f\n", juros);
    printf("Montante (M): %.2f\n", montante);

    printf("Criado por Thiago Bonfanti Guimarães");
    return 0;
}
