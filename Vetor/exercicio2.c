#include <stdio.h>

int main(int argc, char const *argv[])
{
    int tamanho = 10;
    int vetor[tamanho];

    int numero;
    int cont = 0;
    do{
        scanf("%d", &numero);
        if(numero % 2 == 1){
            vetor[cont++] = numero;
        }
    }while(cont < tamanho);

    for(int i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);

    printf("\n");

    return 0;
}
