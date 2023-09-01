#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int tamanho = 40;
    int vetor[tamanho];
    int pares = 0;
    srand(time(NULL));

    for(int i = 0; i < tamanho; i++)
        vetor[i] = rand() % 100;

    for(int i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);
    printf("\n");

    for(int i = 0; i < tamanho; i++)
        if(vetor[i] % 2 == 0)
            pares++;

    printf("Numero de valores par: %d\n", pares);

    return 0;
}
