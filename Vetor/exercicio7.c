#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int tamanho = 20;
    int vetor[tamanho], vetor2[tamanho], vetor3[tamanho];
    srand(time(NULL));

    for(int i = 0; i < tamanho; i++){
        vetor[i] = rand() % 100 - 100;
        vetor2[i] = rand() % 100;
    }

    for(int i = 0; i < tamanho; i++){
        if (i % 2 == 0)
            vetor3[i] = vetor[i];
        else
            vetor3[i] = vetor2[i];
    }
    printf("\n");

    for(int i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);
    printf("\n");

    for(int i = 0; i < tamanho; i++)
        printf("%d ", vetor2[i]);
    printf("\n");

    for(int i = 0; i < tamanho; i++)
        printf("%d ", vetor3[i]);
    printf("\n");


    return 0;
}