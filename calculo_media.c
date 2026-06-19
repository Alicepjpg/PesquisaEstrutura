#include <stdio.h>

int main() {
    float notas[4] = {7.5, 8.2, 6.0, 9.5};
    int totalNotas = 4;
    float soma = 0.0;
    float media = 0.0;

    for (int i = 0; i < totalNotas; i++) {
        soma += notas[i];
    }
    
    media = soma / totalNotas;

    printf("--- Sistema de Calculo de Medias ---\n");
    printf("A media final obtida foi: %.2f\n", media);

    return 0;
}
