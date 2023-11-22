#include <stdio.h>

void encontrarMaxMin(const int *vetor, int tamanho, int *maximo, int *minimo) {
    if (tamanho == 0) {  // Verifica se o vetor não está vazio
        printf("O vetor está vazio.\n");
        return;
    }

    // Inicializa os valores máximo e mínimo com o primeiro elemento do vetor
    *maximo = *vetor;
    *minimo = *vetor;

    // Percorre o vetor para encontrar o valor máximo e mínimo
    for (int i = 1; i < tamanho; i++) {
        if (*(vetor + i) > *maximo) {
            *maximo = *(vetor + i);
        }

        if (*(vetor + i) < *minimo) {
            *minimo = *(vetor + i);
        }
    }
}

int main() {    // Teste da função com diferentes vetores

    int vetor1[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    int tamanho1 = sizeof(vetor1) / sizeof(vetor1[0]);
    int max1, min1;

    encontrarMaxMin(vetor1, tamanho1, &max1, &min1);
    printf("Vetor 1 - Máximo: %d, Mínimo: %d\n", max1, min1);

    int vetor2[] = {-1, -5, 3, 8, 2, -7, 10};
    int tamanho2 = sizeof(vetor2) / sizeof(vetor2[0]);
    int max2, min2;

    encontrarMaxMin(vetor2, tamanho2, &max2, &min2);
    printf("Vetor 2 - Máximo: %d, Mínimo: %d\n", max2, min2);

    return 0;
}