
#include <stdio.h>
#include <string.h>

#define TAM 20

typedef struct {
    char pagina[100];
} Site;

Site pilha[TAM];
int topo = -1;

// Verifica se a pilha está vazia
int pilhaVazia() {
    return topo == -1;
}

// Verifica se a pilha está cheia
int pilhaCheia() {
    return topo == TAM - 1;
}

// Inserção de elementos
void visitarPagina(char pagina[]) {
    if (pilhaCheia()) {
        printf("\nHistorico cheio!\n");
        return;
    }

    topo++;
    strcpy(pilha[topo].pagina, pagina);

    printf("\nPagina visitada: %s\n", pagina);
}

// Remoção de elementos
void voltarPagina() {
    if (pilhaVazia()) {
        printf("\nNao ha paginas para voltar.\n");
        return;
    }

    printf("\nVoltando da pagina: %s\n", pilha[topo].pagina);
    topo--;
}

// Consulta
void paginaAtual() {
    if (pilhaVazia()) {
        printf("\nNenhuma pagina no historico.\n");
        return;
    }

    printf("\nPagina atual: %s\n", pilha[topo].pagina);
}

// Exibição da pilha
void exibirHistorico() {
    if (pilhaVazia()) {
        printf("\nHistorico vazio.\n");
        return;
    }

    printf("\n--- HISTORICO DE NAVEGACAO ---\n");

    for (int i = topo; i >= 0; i--) {
        printf("%d. %s\n", topo - i + 1, pilha[i].pagina);
    }
}

int main() {
    int opcao;
    char pagina[100];

    do {
        printf("\n---- HISTORICO DE NAVEGACAO ----\n");
        printf("1 - Visitar pagina\n");
        printf("2 - Voltar pagina\n");
        printf("3 - Consultar pagina atual\n");
        printf("4 - Exibir historico\n");
        printf("5 - Verificar historico\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        getchar();

        switch(opcao) {

            case 1:
                printf("Digite o nome da pagina: ");
                fgets(pagina, sizeof(pagina), stdin);

                pagina[strcspn(pagina, "\n")] = '\0';

                visitarPagina(pagina);
                break;

            case 2:
                voltarPagina();
                break;

            case 3:
                paginaAtual();
                break;

            case 4:
                exibirHistorico();
                break;

            case 5:
                if (pilhaVazia())
                    printf("\nO historico esta vazio.\n");
                else
                    printf("\nExistem %d pagina(s) no historico.\n", topo + 1);
                break;

            case 0:
                printf("\nNavegador encerrado\n");
                break;

            default:
                printf("\nOpcao invalida!\n");
        }

    } while(opcao != 0);

    return 0;
}
    } while(opcao != 0);

    return 0;
}
