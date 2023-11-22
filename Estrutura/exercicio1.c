#include <stdio.h>

struct endereco{
    char estado[30];
    char cidade[30];
    char rua[30];
    int numero;
};

struct registroPessoa{
    char nome[30];
    int idade;
    struct endereco endereco;
};

typedef struct registroPessoa pessoa;

void imprimirPessoa(pessoa pessoa){
    printf("Nome: %s Idade: %d \nEndereco\nRua: %s n%d \nEstado: %s Cidade: %s\n", pessoa.nome, pessoa.idade,
        pessoa.endereco.rua, pessoa.endereco.numero, pessoa.endereco.estado, pessoa.endereco.cidade);
}

int main(int argc, char const *argv[])
{
    pessoa pessoa1;
    printf("Digite o nome e idade da pessoa:\n");
    fgets(pessoa1.nome, 30, stdin);
    scanf("%d", &pessoa1.idade);
    fflush(stdin);
    printf("Digite a rua, numero, estado e cidade:\n");
    fgets(pessoa1.endereco.rua, 30, stdin);
    scanf(" %d", &pessoa1.endereco.numero);
    fflush(stdin);
    fgets(pessoa1.endereco.estado, 30, stdin);
    fgets(pessoa1.endereco.cidade, 30, stdin);

    imprimirPessoa(pessoa1);

    return 0;
}
