#include <stdio.h>
#include <string.h>

struct Produto {
    int codigo;
    char nome[50];
    float preco;
    int quantidade;
};

int main() {
    struct Produto inventario[3];
    float valorTotalEstoque = 0.0;

    printf("--- Sistema de Cadastro de Estoque (Structs) ---\n\n");

    for (int i = 0; i < 3; i++) {
        printf("Cadastro do Produto %d:\n", i + 1);
        printf("Digite o codigo: ");
        scanf("%d", &inventario[i].codigo);
        
        printf("Digite o nome: ");
        scanf(" %[^\n]s", inventario[i].nome); 
        
        printf("Digite o preco (R$): ");
        scanf("%f", &inventario[i].preco);
        
        printf("Digite a quantidade em estoque: ");
        scanf("%d", &inventario[i].quantidade);
        printf("\n");
    }

    printf("--- Relatorio Geral de Inventario ---\n");
    for (int i = 0; i < 3; i++) {
        float subtotal = inventario[i].preco * inventario[i].quantidade;
        valorTotalEstoque += subtotal;

        printf("Cod: %d | Nome: %-15s | Preco: R$ %6.2f | Qtd: %d | Subtotal: R$ %6.2f\n",
               inventario[i].codigo, 
               inventario[i].nome, 
               inventario[i].preco, 
               inventario[i].quantidade,
               subtotal);
    }

    printf("\nValor total investido no estoque da empresa: R$ %.2f\n", valorTotalEstoque);

    return 0;
}
