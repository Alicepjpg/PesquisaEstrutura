#include <stdio.h>

#define MAX 100

int lista[MAX];
int tamanho = 0;

void inserirOrdenado(int valor) {
int i = tamanho - 1;

while (i >= 0 && lista[i] > valor) {
lista[i + 1] = lista[i];
i--;
}

lista[i + 1] = valor;
tamanho++;
}

void exibir() {
int i;

printf("Lista: ");

for(i = 0; i < tamanho; i++) {
printf("%d ", lista[i]);
}

printf("\n");
}

int buscar(int valor) {
int i;

for(i = 0; i < tamanho; i++) {
if(lista[i] == valor) {
return i;
}
}

return -1;
}

int main() {

inserirOrdenado(30);
inserirOrdenado(10);
inserirOrdenado(40);
inserirOrdenado(20);

exibir();

int pos = buscar(20);

if(pos != -1)
printf("Elemento encontrado na posicao %d\n", pos);
else
printf("Elemento nao encontrado\n");

return 0;
}
