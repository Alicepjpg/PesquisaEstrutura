#include <stdio.h>

struct Cliente {
    int id;
    char nome[50];
};

int main() {
    struct Cliente cliente1 = {1, "Maria"};

    printf("ID: %d\n", cliente1.id);
    printf("Nome: %s\n", cliente1.nome);

    return 0;
}