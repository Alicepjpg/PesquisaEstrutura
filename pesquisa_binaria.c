#include <stdio.h>
int main() {

    int v[8] = {2, 4, 6, 8, 10, 12, 14, 16};
    int busca = 10;

    int inicio = 0;
    int fim = 7;
    int meio;

    while (inicio <= fim) {

        meio = (inicio + fim) / 2;

        if (v[meio] == busca) {
            printf("Encontrado na posicao %d", meio);
            return 0;
        }

        if (busca < v[meio]) {
            fim = meio - 1;
        }
        else {
            inicio = meio + 1;
        }
    }

    printf("Elemento nao encontrado");

    return 0;
}
