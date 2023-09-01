#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numLinhas = 5;
    int numColunas = 5;
    int matriz[numLinhas][numColunas];

    for(int linha = 0; linha < numLinhas; linha++)
        for(int coluna = 0; coluna < numColunas; coluna++)
            if(linha == coluna)
                matriz[linha][coluna] = 1;
            else
                matriz[linha][coluna] = 0;

    for(int linha = 0; linha < numLinhas; linha++){
        for(int coluna = 0; coluna < numColunas; coluna++)
            printf("%7d", matriz[linha][coluna]);
        printf("\n");
    }
    
    return 0;
}