#include <stdio.h>

int main() {
    int horas, vm;
    double litros;

    scanf("%d %d", &horas, &vm); // Lê as horas e a velocidade média

    litros = (horas * vm) / 12.0; // Calcula a quantidade de litros necessária

    printf("%.3lf\n", litros); // Imprime a quantidade de litros com três casas decimais

    return 0;
}
