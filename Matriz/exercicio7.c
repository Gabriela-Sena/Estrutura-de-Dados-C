#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int N = 8;
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
        for(int j = 0; j < N; j++)
            if(j > i) // quando j > i, acessando diagonal triangular superior
                matriz[i][j] = 0;


    printf("Matriz triangular inferior\n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)
            printf("%4d", matriz[i][j]);
        printf("\n");
    }

    return 0;
}
