#include <stdio.h>

int main(){
    //Declaração das variáveis
    double R = 0;
    double VOL = 0;
    //Leitura do raio da esfera
    scanf("%lf", &R);
    //Cálculo do Volume da esfera
    VOL = (4/3.0) * 3.14159 * (R * R * R);
    //Impressão do resultado
    printf("VOLUME = %.3lf\n", VOL);
    
}