#include <stdio.h>

int main() {
    int a, b, c, d;
    
    //Aqui é onde ocorre a entrada dos valores
    scanf("%d %d %d %d", &a, &b, &c, &d);

    //Aqui é onde ocorre a verificação das condições pedidas pelo BeeCrowd e logo depois, fala se cumpre os requisitos ou não
    if (b > c && d > a && c + d > a + b && c > 0 && d > 0 && a % 2 == 0) {
        printf("Valores aceitos\n");
    } else {
        printf("Valores nao aceitos\n");
    }
    
    return 0;
}
