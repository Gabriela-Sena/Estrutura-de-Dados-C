#include <stdio.h>

int main(int argc, char const *argv[])
{
    int tamanho = 20;
    int vetor[tamanho];
    int X;
    int posicao = -1;
    int cont = 0;

    for(int i = 0; i < tamanho; i++)
        scanf("%d", &vetor[i]);

    printf("digite a busca: ");
    scanf("%d", &X);

    do{
        if(vetor[cont] == X)
            posicao = cont;
        cont++;
    }while(posicao == -1 && cont < tamanho);

    if(posicao == -1)
        printf("numero nao encontrado\n");
    else
        printf("elemento na posicao %d\n", posicao);
        
    return 0;
}
