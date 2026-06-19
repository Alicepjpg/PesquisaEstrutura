#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int dado;
    struct No *prox;
} No;

No *criarNo(int valor) {
    No *novo = (No *)malloc(sizeof(No));
    novo->dado = valor;
    novo->prox = novo;
    return novo;
}

int listaVazia(No *inicio) {
    return inicio == NULL;
}

No *inserir(No *inicio, int valor) {
    No *novo = criarNo(valor);

    if (inicio == NULL) {
        return novo;
    }

    No *temp = inicio;

    while (temp->prox != inicio) {
        temp = temp->prox;
    }

    temp->prox = novo;
    novo->prox = inicio;

    return inicio;
}

void exibir(No *inicio) {
    if (listaVazia(inicio)) {
        printf("Lista vazia!\n");
        return;
    }

    No *temp = inicio;

    do {
        printf("%d ", temp->dado);
        temp = temp->prox;
    } while (temp != inicio);

    printf("\n");
}

void liberarMemoria(No **inicio) {
    if (*inicio == NULL)
        return;

    No *atual = (*inicio)->prox;
    No *temp;

    while (atual != *inicio) {
        temp = atual;
        atual = atual->prox;
        free(temp);
    }

    free(*inicio);
    *inicio = NULL;
}

int main() {
    No *lista = NULL;

    lista = inserir(lista, 10);
    lista = inserir(lista, 20);
    lista = inserir(lista, 30);

    printf("Elementos da lista: ");
    exibir(lista);

    liberarMemoria(&lista);

    return 0;
}
