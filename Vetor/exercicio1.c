#include <stdio.h>

int main(int argc, char const *argv[])
{
    const int tamanho = 12;
    int vetor[tamanho];
    const int X, Y;

    printf("Insira os valores do vetor:\n");
    for(int i = 0; i < tamanho; i++)
        scanf("%d", &vetor[i]);

    printf("Insira o indice X e Y:\n");
    scanf("%d", &X);
    scanf("%d", &Y);

    printf("Resultado da soma: %d\n", vetor[X] + vetor[Y]);

    return 0;
}
