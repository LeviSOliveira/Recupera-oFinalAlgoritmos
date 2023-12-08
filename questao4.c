#include <stdio.h>

int main() {
    int gols_inter, gols_gremio, continuar = 1;
    int grenais = 0, vitorias_inter = 0, vitorias_gremio = 0, empates = 0;

    while (continuar == 1) {
        //Aqui é onde faz a leitura dos gols
        scanf("%d %d", &gols_inter, &gols_gremio);

        // Aqui faz a contagem dos grenais
        grenais++;

        // Faz uma verificação se ocorreu vitória ou empate.
        if (gols_inter > gols_gremio) {
            vitorias_inter++;
        } else if (gols_gremio > gols_inter) {
            vitorias_gremio++;
        } else {
            empates++;
        }

        // Pergunta se deseja continuar
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &continuar);
    }

    //Aqui faz uma impressão das estastiticas, assim como pedido na plataforma
    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", vitorias_inter);
    printf("Gremio:%d\n", vitorias_gremio);
    printf("Empates:%d\n", empates);

    if (vitorias_inter > vitorias_gremio) {
        printf("Inter venceu mais\n");
    } else if (vitorias_gremio > vitorias_inter) {
        printf("Gremio venceu mais\n");
    } else {
        printf("Nao houve vencedor\n");
    }

    return 0;
}