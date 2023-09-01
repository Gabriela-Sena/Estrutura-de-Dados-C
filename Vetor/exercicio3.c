#include <stdio.h>

int main(int argc, char const *argv[])
{
    int tamanho = 17;
    int vetor[tamanho];

    for(int i = 0; i < tamanho; i++)
        vetor[i] = i;

    for(int i = 0; i < tamanho / 2; i++){
        // int aux = vetor[i];
        // vetor[i] = vetor[tamanho-1-i];
        // vetor[tamanho-1-i] = aux;
        vetor[i] = vetor[i] + vetor[tamanho-1-i];
        vetor[tamanho-1-i] = vetor[i] - vetor[tamanho-1-i];
        vetor[i] = vetor[i] - vetor[tamanho-1-i];
    }

    for(int i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);
    printf("\n");

    return 0;
}

// x = 10
// y = 5

// x = x + y
// x15

// x = x - y
// x5

// y = x - y
// y = 10
