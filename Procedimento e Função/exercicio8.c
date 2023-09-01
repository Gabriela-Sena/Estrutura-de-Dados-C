#include <stdio.h>

double media (int N, double vetor[N]){
    double soma = 0;

    for(int i = 0; i < N; i++)
        soma += vetor[i];

    return soma / N;
}

void imprimirVetor(int N, double vetor[N]){
    for(int i = 0; i < N; i++){
        printf("%7.2lf", vetor[i]);
    }
}

int main(int argc, char const *argv[])
{
    int tam;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    double vetor[tam];
    printf("Digite os numeros do vetor:\n");
    for(int i = 0; i < tam; i ++){
        printf("%d: ", i+1);
        scanf("%lf", &vetor[i]);
    }

    imprimirVetor(tam, vetor);

    printf("\n\nMedia: %.2lf\n", media(tam, vetor));
    return 0;
}
