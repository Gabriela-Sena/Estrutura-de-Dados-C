#include <stdio.h>
#include <stdlib.h>

int somaElementos(int *array, int tamanho) {
    int i, soma = 0;
    int*ptr=array; //inicalização do ponteiro

    for(i = 0; i<tamanho; i++){
        soma=soma+*ptr;
        ptr++;        
    }

    return soma;
}

int main() {

    //int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, numeros[10], tamanho = 10;

    for( i=0; i<tamanho; i++){
        printf("Digite o numero da posicao [%d]: ", i);
        scanf("%d", &numeros[i]);
    }

    int resultado = somaElementos(numeros, tamanho);

    system("cls");
    printf("A soma dos elementos do array sera: %d\n", resultado);

    return 0;
}