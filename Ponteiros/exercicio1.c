#include <stdio.h>
#include <stdlib.h>

int main()
{

int valor1 = 5; 
int *inteiro1; 
int valor2 = 9;
int *inteiro2;

inteiro1 = &valor1;
inteiro2 = &valor2;

printf("Inteiro: %d \nEndereco: %p\n", *inteiro1, inteiro1);
printf("Inteiro: %d \nEndereco: %p\n", *inteiro2, inteiro2);


if (inteiro1 > inteiro2) {
        printf("O endereco de numero 1 eh maior.\n");
    } else if (inteiro2 > inteiro1) {
        printf("O endereco de numero 2 eh maior.\n");
    } else {
        printf("Os enderecos sao iguais.\n");
    }

return 0;

}