#include <stdio.h>
#include <stdlib.h>

// void imprimirMatriz(int N, int matriz[N][N]);
// void imprimirMatriz(int N, int matriz[][N]);
// void imprimirMatriz(int N, int *matriz);

void imprimirMatriz(int N, int matriz[][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)
            printf("%4d", matriz[i][j]);
        printf("\n");
    }
}

void preencherMatriz(int N, int matriz[N][N]){
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            matriz[i][j] = rand() % 100;
}

int maiorNumero(int N, int matriz[][N]){
    int maior = matriz[0][0];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)
            if(matriz[i][j] > maior)
                maior = matriz[i][j];
    }

    return maior;
}

int main(int argc, char const *argv[])
{
    int N = 5;
    int matriz[N][N];

    preencherMatriz(N, matriz);
    imprimirMatriz(N, matriz);

    printf("\n\nMaior numero: %d\n", maiorNumero(N, matriz));
   
    return 0;
}