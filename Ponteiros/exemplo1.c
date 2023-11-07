#include <stdio.h>
#include <stdlib.h>

int main()
{
int valor = 5; // variável do tipo int
int *inteiro; // ponteiro para int
inteiro = &valor; // copiando endereço
*inteiro = 10; // atribuindo valor
printf("Inteiro: %d \nEndereco: %p\n", *inteiro, inteiro);

return 0;
}