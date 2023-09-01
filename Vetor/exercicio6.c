#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int tamanho = 40;
    int vetor[tamanho];
    int pares = 0;
    srand(time(NULL));

    for(int i = 0; i < tamanho; i++)
        vetor[i] = rand() % 100 - 50;

    for(int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
        if(vetor[i] < 0)
            vetor[i] = 0;
    }
    printf("\n");

    for(int i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);
    printf("\n");


    return 0;
}