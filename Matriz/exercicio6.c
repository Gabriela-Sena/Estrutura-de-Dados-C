#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int N = 4;
    int matriz[N][N];

    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            matriz[i][j] = rand() % 100;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)
            printf("%4d", matriz[i][j]);
        printf("\n");
    }

    for(int j = 0; j < N; j++){
        int aux = matriz[0][j];
        matriz[0][j] = matriz[j][N-1];
        matriz[j][N-1] = aux;
    }

    printf("Matriz modificada\n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)
            printf("%4d", matriz[i][j]);
        printf("\n");
    }


    return 0;
}
