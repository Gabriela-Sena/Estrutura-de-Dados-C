#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int N = 5;
    int matriz[N][N];

    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            matriz[i][j] = rand() % 100;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)
            printf("%4d", matriz[i][j]);
        printf("\n");
    }

    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++){
            if(i > j){ // é necessário acessar somente metade da matriz
                int aux = matriz[i][j];
                matriz[i][j] = matriz[j][i];
                matriz[j][i] = aux;
            }
        }

    printf("Matriz\n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)
            printf("%4d", matriz[i][j]);
        printf("\n");
    }

    return 0;
}