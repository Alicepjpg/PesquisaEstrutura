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

# Lista Ordenada em C

## Descrição

Este projeto apresenta a implementação de uma Lista Ordenada utilizando a linguagem C.

Uma lista ordenada é uma estrutura de dados em que os elementos permanecem organizados em ordem crescente. Sempre que um novo valor é inserido, ele é colocado na posição correta para manter a organização da lista.

## Funcionalidades

- Inserção mantendo a ordem dos elementos.
- Exibição dos elementos da lista.
- Busca de valores.
- Organização automática dos dados.

## Como Funciona

Ao inserir um novo elemento, o programa verifica a posição correta para armazená-lo. Dessa forma, a lista permanece ordenada independentemente da ordem em que os valores são adicionados.

### Exemplo

Valores inseridos:

```text
30
10
40
20
```

Resultado:

```text
10 20 30 40
```

## Complexidade das Operações

| Operação | Complexidade |
|-----------|------------|
| Inserção Ordenada | O(n) |
| Busca | O(n) |
| Exibição | O(n) |

## Compilação

Compile o programa utilizando o GCC:

```bash
gcc lista_ordenada.c -o lista_ordenada
```

## Execução

Windows:

```bash
lista_ordenada.exe
```

Linux/Mac:

```bash
./lista_ordenada
```

## Estrutura Utilizada

A implementação foi realizada utilizando um vetor para armazenar os elementos da lista.

