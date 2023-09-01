#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int N = 10;
    int matriz[N][N];
    int matriz2[N][N];

    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++){
            matriz[i][j] = rand() % 100;
            matriz2[i][j] = rand() % 10;
        }

    printf("Matriz 1\n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)
            printf("%4d", matriz[i][j]);
        printf("\n");
    }

    printf("Matriz 2\n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)
            printf("%4d", matriz2[i][j]);
        printf("\n");
    }

    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++){
            if(i > j && i != j){ // acessa metade da matriz, e não acessa a diagonal principal
                int aux = matriz[i][j];
                matriz[i][j] = matriz2[j][i];
                matriz2[j][i] = aux;
            }
        }

    printf("Matriz 1\n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)
            printf("%4d", matriz[i][j]);
        printf("\n");
    }

    printf("Matriz 2\n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)
            printf("%4d", matriz2[i][j]);
        printf("\n");
    }

    return 0;
}