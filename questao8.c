#include <stdio.h>

int main() {
    int n, ano;
    
    scanf("%i", &n); // Lê a quantidade de casos
    
    while (n--) { // Para cada caso
        scanf("%i", &ano); // Lê o número de anos transcorridos
        
        if (ano < 2015)
            printf("%i D.C.\n", 2015 - ano); // Calcula e imprime o ano correspondente em D.C.
        else
            printf("%i A.C.\n", ano - 2014); // Calcula e imprime o ano correspondente em A.C.
    }

    return 0;
}
