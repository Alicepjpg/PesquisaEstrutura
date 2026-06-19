#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó da lista duplamente encadeada
typedef struct No {
int dado;
struct No *ant; // ponteiro para o nó anterior
struct No *prox; // ponteiro para o próximo nó
} No;

No *inicio = NULL; // início da lista

// Inserção no início da lista
void inserirInicio(int valor) {
No *novo = (No*)malloc(sizeof(No));

novo->dado = valor;
novo->ant = NULL;
novo->prox = inicio;

if (inicio != NULL)
inicio->ant = novo;

inicio = novo;
}

// Inserção no final da lista
void inserirFinal(int valor) {
No *novo = (No*)malloc(sizeof(No));

novo->dado = valor;
novo->prox = NULL;

if (inicio == NULL) {
novo->ant = NULL;
inicio = novo;
return;
}

No *aux = inicio;

while (aux->prox != NULL)
aux = aux->prox;

aux->prox = novo;
novo->ant = aux;
}

// Remoção de um valor da lista
void remover(int valor) {
No *aux = inicio;

while (aux != NULL && aux->dado != valor)
aux = aux->prox;

if (aux == NULL) {
printf("Valor %d não encontrado!\n", valor);
return;
}

// Nó no início
if (aux->ant == NULL) {
inicio = aux->prox;

if (inicio != NULL)
inicio->ant = NULL;
}
// Nó no final
else if (aux->prox == NULL) {
aux->ant->prox = NULL;
}
// Nó no meio
else {
aux->ant->prox = aux->prox;
aux->prox->ant = aux->ant;
}

free(aux);
printf("Valor %d removido com sucesso!\n", valor);
}

// Exibição da lista em ordem direta
void exibirDireta() {
No *aux = inicio;

if (inicio == NULL) {
printf("Lista vazia!\n");
return;
}

printf("Lista (direta): ");

while (aux != NULL) {
printf("%d", aux->dado);

if (aux->prox != NULL)
printf(" <-> ");

aux = aux->prox;
}

printf("\n");
}

// Exibição da lista em ordem inversa
void exibirInversa() {
No *aux = inicio;

if (inicio == NULL) {
printf("Lista vazia!\n");
return;
}

while (aux->prox != NULL)
aux = aux->prox;

printf("Lista (inversa): ");

while (aux != NULL) {
printf("%d", aux->dado);

if (aux->ant != NULL)
printf(" <-> ");

aux = aux->ant;
}

printf("\n");
}

// Liberação da memória
void liberar() {
No *aux = inicio;

while (aux != NULL) {
No *temp = aux;
aux = aux->prox;
free(temp);
}

inicio = NULL;
printf("Memória liberada!\n");
}
