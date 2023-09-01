#include <stdio.h>

int main(){
    int numLinhas = 10;
    int numColunas = 10;
    int matriz[numLinhas][numColunas];

    for(int linha = 0; linha < numLinhas; linha++)
        for(int coluna = 0; coluna < numColunas; coluna++)
            scanf("%d", &matriz[linha][coluna]);

    int maior = matriz[0][0];
    int linhaMaior, colunaMaior;

    for(int linha = 0; linha < numLinhas; linha++)
        for(int coluna = 0; coluna < numColunas; coluna++)
            if(maior < matriz[linha][coluna]){
                maior = matriz[linha][coluna];
                linhaMaior = linha;
                colunaMaior = coluna;
            }

    for(int linha = 0; linha < numLinhas; linha++){
        for(int coluna = 0; coluna < numColunas; coluna++)
            printf("%7d", matriz[linha][coluna]);
        printf("\n");
    }

    printf("Linha %d | Coluna %d\n", linhaMaior, colunaMaior);
    return 0;
}