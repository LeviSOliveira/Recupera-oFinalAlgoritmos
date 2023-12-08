#include <stdio.h>

int main() {
    int i, n, j; 
    scanf("%d", &n); 
    for(i = 0; i < n; i++) { 
        scanf("%d", &j); 
        if(j % 2 == 0) {
            printf("0\n"); //Aqui é quando o número é par
        } else {
            printf("1\n"); //Aqui é quando ele é impar
        }
    }
    return 0;
}
