#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int N = 4;
    int matriz1[N][N];
    int matriz2[N][N];
    int matriz3[N][N];
    srand(1);

    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++){
            matriz1[i][j] = rand() % 100;
            matriz2[i][j] = rand() % 100;
        }

    printf("\nMatriz 1\n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)
            printf("%5d", matriz1[i][j]);
        printf("\n");
    }

    printf("\nMatriz 2\n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)
            printf("%5d", matriz2[i][j]);
        printf("\n");
    }

    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++){
            if(matriz1[i][j] > matriz2[i][j])
                matriz3[i][j] = matriz1[i][j];
            else
                matriz3[i][j] = matriz2[i][j];
        }

    printf("\n\nMatriz 3\n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)
            printf("%5d", matriz3[i][j]);
        printf("\n");
    }


    return 0;
}
