#include <stdio.h>

int main() {
    int notas[5];
    int soma = 0;
    float media = 0.0;

    printf("--- Sistema de Entrada de Dados com Vetores ---\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%d", &notas[i]); 
    }

    for (int i = 0; i < 5; i++) {
        soma += notas[i];
    }

    media = (float)soma / 5;

    printf("\n--- Relatorio de Notas ---\n");
    printf("A soma de todas as notas informadas e: %d\n", soma);
    printf("A media geral da turma foi: %.2f\n", media);

    return 0;
}
