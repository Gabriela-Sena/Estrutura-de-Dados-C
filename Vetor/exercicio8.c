#include <stdio.h>

int main(int argc, char const *argv[])
{
    const int tamanho = 40;
    int vetor[tamanho];

    for(int i = 0; i < tamanho; i++){
        vetor[i] = i; //preenche o vetor com valores 0..39
        printf("%d ", vetor[i]);
    }
    printf("\n");

    int soma = 0;
    for(int i = 1; i < tamanho; i++){
        // soma o valor da posição atual com o valor da posição anterior
        vetor[i] = vetor[i] + vetor[i-1]; 
    }

    for(int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
