#include <stdio.h>
#include <stdlib.h>

#define N 6

int main(){
    int matriz[N][N];
    srand(2);

    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            matriz[i][j] = rand() % 20;

    int cont = 0;
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            if(matriz[i][j] > 10)
                cont++;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)
            printf("%4d", matriz[i][j]);
        printf("\n");
    }

    printf("\nQtd de numeros maiores que 10: %d\n", cont);


    return 0;
}