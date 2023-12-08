#include<stdio.h>

int main() {
    int i, k, n, a; 
    float b[5] = {1.50, 2.50, 3.50, 4.50, 5.50}; // Array com os preços dos produtos

    while(scanf("%d", &n) != EOF) { // Enquanto houver entrada de dados
        float cal = 0; // Inicializa a variável cal para armazenar o total da compra

        for(i = 0; i < n; i++) { // Loop para cada compra
            scanf("%d %d", &k, &a); // Lê o código do produto e a quantidade comprada
            k = k % 1000; // Obtém o índice correto no array de preços

            // Soma ao total o preço do produto multiplicado pela quantidade comprada
            cal += a * b[k - 1];
        }

        // Imprime o total da compra com duas casas decimais
        printf("%.2f\n", cal);
    }

    return 0;
}
