#include <stdio.h>

int calcularComprimentoString(const char *str) {
    const char *ptr = str;

    while (*ptr != '\0') { //encontrar o caractere nulo
        ptr++;
    }

    return (int)(ptr - str); // diferença entre os ponteiros
}

int main() {

    char palavra1[100], palavra2[100], palavra3[100];

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);

    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    printf("Digite a terceira palavra: ");
    scanf("%s", palavra3);

    printf("Comprimento de \"%s\": %d\n", palavra1, calcularComprimentoString(palavra1));
    printf("Comprimento de \"%s\": %d\n", palavra2, calcularComprimentoString(palavra2));
    printf("Comprimento de \"%s\": %d\n", palavra3, calcularComprimentoString(palavra3));

    return 0;
}