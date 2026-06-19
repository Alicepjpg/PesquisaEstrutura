#include <stdio.h>
int main() {

    // Busca sequencial em vetor de inteiros
    int v[5] = {10, 20, 30, 40, 50};

    int busca = 30;
    int comparacoes = 0;
    int i;

    for (i = 0; i < 5; i++) {

        // Contagem de comparações realizadas
        comparacoes++;

        if (v[i] == busca) {

            // Retorno da posição encontrada
            printf("Elemento encontrado na posicao %d\n", i);

            // Quantidade de comparações realizadas
            printf("Comparacoes realizadas: %d", comparacoes);

            return 0;
        }
    }

    printf("Elemento nao encontrado\n");
    printf("Comparacoes realizadas: %d", comparacoes);

    return 0;
}
