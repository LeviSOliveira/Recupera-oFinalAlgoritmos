#include <stdio.h>

int main() {
    int codigo, quantidade;
    float preco = 0.0;

    while (scanf("%d %d", &codigo, &quantidade) == 2) {
        switch (codigo) {
            case 1:
                preco = 4.00;
                break;
            case 2:
                preco = 4.50;
                break;
            case 3:
                preco = 5.00;
                break;
            case 4:
                preco = 2.00;
                break;
            case 5:
                preco = 1.50;
                break;
            default:
                printf("Codigo de item invalido: %d\n", codigo);
                continue;
        }

        float total = preco * quantidade;
        printf("Total: R$ %.2f\n", total);
    }

    return 0;
}
