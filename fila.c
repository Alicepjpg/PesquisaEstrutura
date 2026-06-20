
#include <stdio.h>
#include <string.h>

#define TAM 10

typedef struct {
	int numero;
	char cliente[50];
} Pedido;

Pedido fila[TAM];

int inicio = 0;
int fim = -1;
int quantidade = 0;

// Verifica se a fila está vazia
int filaVazia() {
	return quantidade == 0;
}

// Inserção de elementos (Enfileirar)
void adicionarPedido(int numero, char cliente[]){
	if (quantidade == TAM) {
		printf("\nFila de pedidos cheia!\n");
		return;
	}

	fim++;
	fila[fim].numero = numero;
	strcpy(fila[fim].cliente, cliente);

	quantidade++;

	printf("\nPedido %d de %s adicionado com sucesso!\n",
	       numero, cliente);
}

// Remoção de elementos (Desenfileirar)
void atenderPedido() {
	if (filaVazia()) {
		printf("\nNao existe pedidos na fila.\n");
		return;
	}

	printf("\nPedido atendido:\n");
	printf("Numero: %d\n", fila[inicio].numero);
	printf("Cliente: %s\n", fila[inicio].cliente);

	inicio++;
	quantidade--;
}

// Consulta ao primeiro elemento da fila
void consultarPrimeiroPedido() {
	if (filaVazia()) {
		printf("\nFila vazia.\n");
		return;
	}

	printf("\nPrimeiro pedido da fila:\n");
	printf("Numero: %d\n", fila[inicio].numero);
	printf("Cliente: %s\n", fila[inicio].cliente);
}

// Exibição da fila
void exibirFila() {
	if (filaVazia()) {
		printf("\nFila vazia.\n");
		return;
	}

	printf("\n--- FILA DE PEDIDOS ---\n");

	for (int i = inicio; i <= fim; i++) {
		printf("Pedido %d - Cliente: %s\n",
		       fila[i].numero,
		       fila[i].cliente);
	}
}

int main() {
	int opcao;
	int numeroPedido;
	char nomeCliente[50];

	do {
		printf("\n---- SISTEMA DE PEDIDOS ----\n");
		printf("1 - Adicionar pedido\n");
		printf("2 - Atender pedido\n");
		printf("3 - Consultar primeiro pedido\n");
		printf("4 - Exibir fila de pedidos\n");
		printf("5 - Verificar fila de pedidos vazia\n");
		printf("0 - Sair\n");
		printf("Escolha: ");
		scanf("%d", &opcao);

		switch(opcao) {

		case 1:
			printf("Numero do pedido: ");
			scanf("%d", &numeroPedido);

			printf("Nome do cliente: ");
			scanf(" %[^\n]", nomeCliente);

			adicionarPedido(numeroPedido, nomeCliente);
			break;

		case 2:
			atenderPedido();
			break;

		case 3:
			consultarPrimeiroPedido();
			break;

		case 4:
			exibirFila();
			break;

		case 5:
			if (filaVazia())
				printf("\nA fila esta vazia.\n");
			else
				printf("\nA fila possui %d pedido(s).\n", quantidade);
			break;

		case 0:
			printf("\nSistema encerrado\n");
			break;

		default:
			printf("\nOpcao invalida!\n");
		}

	} while(opcao != 0);

	return 0;
}
