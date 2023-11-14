#include <stdio.h>

// Função para verificar se a segunda string ocorre dentro da primeira
int ocorrenciaString(const char *str1, const char *str2) {
    const char *ptr1 = str1;
    const char *ptr2 = str2;

    while (*ptr1 != '\0') {
        const char *tempPtr1 = ptr1;
        ptr2 = str2;

        // Verifica se a substring ocorre a partir da posição atual
        while (*tempPtr1 == *ptr2 && *tempPtr1 != '\0' && *ptr2 != '\0') {
            tempPtr1++;
            ptr2++;
        }

        // Se a segunda string chegou ao final, significa que ocorre
        if (*ptr2 == '\0') {
            return 1; // Ocorrência encontrada
        }

        ptr1++;
    }

    return 0; // Nenhuma ocorrência encontrada
}

int main() {
    char palavra1[100], palavra2[100];

    // Solicita ao usuário inserir as palavras
    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);

    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    // Verificar se a segunda string ocorre dentro da primeira
    if (ocorrenciaString(palavra1, palavra2)) {
        printf("\"%s\" ocorre dentro de \"%s\"\n", palavra2, palavra1);
    } else {
        printf("\"%s\" NÃO ocorre dentro de \"%s\"\n", palavra2, palavra1);
    }

    return 0;
}


