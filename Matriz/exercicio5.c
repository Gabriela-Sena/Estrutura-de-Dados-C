#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int N = 20;
    int matriz[N][N];

    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            matriz[i][j] = rand() % 100;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)
            printf("%4d", matriz[i][j]);
        printf("\n");
    }

    int x;
    int naoEncontrado = 1;
    scanf("%d", &x);

    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++){
            if(matriz[i][j] == x){
                printf("Linha %d | Coluna %d\n", i, j);
                naoEncontrado = 0;
            }
        }
    
    if(naoEncontrado)
        printf("não encontrado\n");

    return 0;
}
