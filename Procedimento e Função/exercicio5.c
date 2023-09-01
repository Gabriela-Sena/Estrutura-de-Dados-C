#include <stdio.h>

void troca(int *a, int *b){
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}


int main(int argc, char const *argv[])
{
    int a = 10, b = 20;

    printf("Antes\nA: %d | B: %d\n", a, b);

    troca(&a, &b);

    printf("Depois\nA: %d | B: %d\n", a, b);

    return 0;
}
