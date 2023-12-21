#include <stdio.h>

int main(){
    int var = 15; //atribui conteudo a variavel var
    int *ptr; //cria a variavel ptr e o ponteiro com este nomenclatura

    //o ponteiro serve para armazenar o endereço de memória de uma variável

    ptr= &var; //atribui a variavel ptr o endereço de memória de var

    printf("Conteudo de var = %d\n", var); //coteudo de var
    printf("Endereco de var: %p\n", &var); //endereço de var, essa variavel var existe em algum lugar especifico da memória
    printf("Conteudo apontado por ptr = %d\n", *ptr);
    printf("Endereco apontado por ptr = %p\n", ptr);
    printf("Endereco de ptr = %p\n", &ptr);

   *ptr = 73; // muda o conteudo de var utilizando o ponteiro que aponta para a memória onde var está alocada

    printf("Conteudo de var = %d\n", var); //coteudo de var
    printf("Endereco de var: %p\n", &var); //endereço de var, essa variavel var existe em algum lugar especifico da memória
    printf("Conteudo apontado por ptr = %d\n", *ptr);
    printf("Endereco apontado por ptr = %p\n", ptr);
    printf("Endereco de ptr = %p\n", &ptr);


    //*ptr - conteudo da variavel que ptr aponta
    //ptr - endereço em que a variavel esta armazenada e que ptr aponta
    //&ptr - endereço de ptr
    //var - coteudo de var
    //&var - endereço de var, mesmo que *ptr

}