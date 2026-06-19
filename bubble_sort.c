#include <stdio.h>
int main() {
  
    int vetor[5] = {5, 2, 4, 1, 3};
    int i, j, temp;

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4 - i; j++) {
            if(v[j] > v[j + 1]) {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }

    printf("Vetor ordenado:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}
