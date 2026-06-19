# PesquisaEstrutura
Repositorio para pesquisa de estrutura de dados
---

## Descrição dos Códigos

### 1. Algoritmo de Cálculo de Média (`01_calculo_media.c`)
* **Propósito**: Demonstração empírica dos pilares de um algoritmo (Entrada, Processamento e Saída).
* **Funcionamento**: O programa inicializa um arranjo com 4 valores de ponto flutuante, realiza o percurso sequencial utilizando uma estrutura de repetição `for` para acumular o somatório e calcula a média aritmética simples, exibindo o resultado formatado no terminal.

### 2. Manipulação de Vetores Dinâmicos com Leitura (`02_vetores_notas.c`)
* **Propósito**: Aplicar os conceitos de estruturas de dados estáticas, homogêneas e indexadas (base zero).
* **Funcionamento**: Captura via teclado (`scanf`) 5 valores inteiros digitados pelo usuário, armazenando-os em posições contíguas de memória. Em seguida, processa os dados para calcular a soma total e a média da turma.

### 3. Sistema de Inventário com Vetor de Structs (`03_sistema_structs.c`)
* **Propósito**: Modelagem de entidades do mundo real através de Tipos Abstratos de Dados (TAD) heterogêneos.
* **Funcionamento**: Define uma `struct Produto` contendo membros de diferentes tipos (inteiro, caractere e ponto flutuante). O programa gerencia um vetor de estruturas para cadastrar múltiplos produtos, calcula o subtotal financeiro de cada item em estoque e consolida o valor total do inventário da empresa.

## Algoritmos de ordenação e pesquisa 

### 1. Bubble Sort (`bubble_sort.c`)

* **Propósito**: Demonstrar o funcionamento de um algoritmo simples de ordenação.
* **Funcionamento**: O programa compara elementos vizinhos e realiza trocas quando estão fora de ordem, repetindo o processo até que todos os elementos estejam organizados em ordem crescente.

### 2. Selection Sort (`selection_sort.c`)

* **Propósito**: Demonstrar um algoritmo de ordenação baseado na seleção do menor elemento.
* **Funcionamento**: O programa procura o menor valor do vetor e o posiciona corretamente, repetindo o processo até que todos os elementos estejam ordenados.

### 3. Pesquisa Sequencial (`pesquisa_sequencial.c`)

* **Propósito**: Demonstrar a busca linear em um conjunto de dados.
* **Funcionamento**: O programa percorre os elementos do vetor um a um até localizar o valor procurado ou concluir que ele não existe.

### 4. Pesquisa Binária (`pesquisa_binaria.c`)

* **Propósito**: Demonstrar uma técnica eficiente de busca em vetores ordenados.
* **Funcionamento**: O programa compara o valor procurado com o elemento central do vetor e reduz sucessivamente o espaço de busca até encontrar o elemento ou encerrar a pesquisa.

---

## Instruções de Compilação e Execução

Para compilar e executar qualquer um dos códigos deste projeto, é necessário um compilador padrão ANSI C (como o `GCC` integrado ao MinGW no Windows ou nativo no Linux/macOS).

### Passo 1: Abrir o terminal
Navegue pelo terminal ou prompt de comando até a pasta onde o arquivo `.c` específico está localizado.

### Passo 2: Compilação
Substitua `nome_do_arquivo.c` pelo arquivo que deseja compilar e `nome_executavel` pelo nome que deseja dar ao programa final:

```bash
gcc nome_do_arquivo.c -o nome_executavel
```

### Passo 3: Execução
Após a compilação concluir sem erros, execute o binário gerado:

**No Windows:**
```cmd
nome_executavel.exe
```

**No Linux / macOS:**
```bash
./nome_executavel
```

# Lista Ordenada em C

## Descrição

Este projeto implementa uma Lista Ordenada utilizando a linguagem C.

Uma lista ordenada é uma estrutura de dados em que os elementos são armazenados de forma organizada. Sempre que um novo valor é inserido, ele é colocado na posição correta para manter a ordem crescente da lista.

## Funcionalidades

- Inserção mantendo a ordem dos elementos.
- Exibição dos elementos da lista.
- Busca de valores.
- Análise das operações realizadas.

## Exemplo

Valores inseridos:

30, 10, 40, 20

Resultado da lista:

10, 20, 30, 40

## Como Compilar

Utilize o compilador GCC:

```bash
gcc lista_ordenada.c -o lista_ordenada
```


# Lista Encadeada em C

## Descrição

Este projeto apresenta a implementação de uma Lista Encadeada utilizando a linguagem C.

Uma lista encadeada é uma estrutura de dados formada por nós. Cada nó possui um campo para armazenar um valor e um ponteiro que indica o próximo nó da lista.

## Funcionalidades

- Criação de nós.
- Inserção no início da lista.
- Inserção no final da lista.
- Busca de elementos.
- Remoção de elementos.
- Exibição da lista.
- Liberação da memória utilizada.

## Como Funciona

Cada elemento da lista é representado por um nó. Os nós são conectados por ponteiros, formando uma sequência de elementos.

### Exemplo

Após inserir os valores:

10
20
30

A lista será exibida como:

10 -> 20 -> 30 -> NULL

## Complexidade das Operações

| Operação | Complexidade |
|-----------|------------|
| Inserção no início | O(1) |
| Inserção no final | O(n) |
| Busca | O(n) |
| Remoção | O(n) |
| Exibição | O(n) |

## Compilação

```bash
gcc lista_encadeada.c -o lista_encadeada
```

# Lista Duplamente Encadeada em C

## Descrição

Este projeto apresenta a implementação de uma Lista Duplamente Encadeada utilizando a linguagem C.

Uma lista duplamente encadeada é uma estrutura de dados formada por nós. Cada nó possui um campo para armazenar um valor, um ponteiro para o próximo nó e outro ponteiro para o nó anterior.

Essa estrutura permite percorrer a lista tanto em ordem direta quanto em ordem inversa.

## Funcionalidades

- Inserção no início da lista.
- Inserção no final da lista.
- Remoção de elementos.
- Exibição em ordem direta.
- Exibição em ordem inversa.
- Liberação da memória utilizada.

## Como Funciona

Cada nó possui dois ponteiros:

- Um para o próximo nó.
- Um para o nó anterior.

Dessa forma, é possível navegar pela lista nos dois sentidos.

### Exemplo

Lista em ordem direta:

10 <-> 20 <-> 30 <-> 40

Lista em ordem inversa:

40 <-> 30 <-> 20 <-> 10

## Complexidade das Operações

| Operação | Complexidade |
|-----------|------------|
| Inserção no início | O(1) |
| Inserção no final | O(n) |
| Remoção | O(n) |
| Exibição direta | O(n) |
| Exibição inversa | O(n) |

## Compilação

```bash
gcc lista_duplamente_encadeada.c -o lista_duplamente_encadeada
```

# Lista Circular em C

## Descrição

Este projeto apresenta a implementação de uma Lista Circular utilizando a linguagem C.

Uma lista circular é uma estrutura de dados em que o último nó aponta novamente para o primeiro nó da lista, formando um ciclo. Dessa forma, é possível percorrer todos os elementos continuamente sem encontrar um ponteiro NULL no final.

## Funcionalidades

- Inserção de elementos.
- Exibição da lista.
- Busca de elementos.
- Percurso circular dos nós.

## Como Funciona

Em uma lista circular, os nós ficam conectados em forma de ciclo. O último nó da lista aponta para o primeiro, permitindo que a navegação retorne ao início automaticamente.

### Exemplo

Lista circular:

10 -> 20 -> 30 -> 40

↓

40 aponta para 10

## Complexidade das Operações

| Operação | Complexidade |
|-----------|------------|
| Inserção | O(n) |
| Busca | O(n) |
| Exibição | O(n) |

## Compilação

```bash
gcc lista_circular.c -o lista_circular
```
