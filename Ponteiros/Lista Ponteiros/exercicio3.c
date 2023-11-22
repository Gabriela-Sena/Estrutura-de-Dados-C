#include <stdio.h>

int main() {
    
    int vetor[5] = {1, 2, 3, 4, 5};

    //ponteiro para inteiros e inicialização com o endereço do primeiro elemento do vetor
    int *ponteiro = vetor;
 
    int i;
    for (i = 0; i < 5; i++) {  // percorrer o vetor e imprimir seus elementos
        printf("Elemento %d: %d\n", i, *ponteiro);

       
        ponteiro++; // o próximo elemento do vetor
    }

    return 0;
}