#include <stdio.h>

struct registroPessoa{
    char nome[30];
    int idade;
};

typedef struct registroPessoa pessoa;

void imprimirPessoa(pessoa pessoa){
    printf("Nome: %sIdade: %d\n", pessoa.nome, pessoa.idade);// Acessando o elemento = Struct.elemento
}

int main(int argc, char const *argv[])
{
    pessoa pessoa1;
    printf("Digite o nome e idade da pessoa:\n");
    fgets(pessoa1.nome, 30, stdin); //le a string sem cortar nos espaços, scanf cortaria se tivesse sobrenome
    //fgets define o tamanho da variavel, gets nao define
    scanf("%d", &pessoa1.idade);
    fflush(stdin); //pula linha ou limpa o buffer
    

    imprimirPessoa(pessoa1);

    return 0;
}
