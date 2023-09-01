#include <stdio.h>
#include <string.h>

#define TAMANHO 200

int main(int argc, char const *argv[])
{
    char frase[TAMANHO] = "Frase com espacos em branco";

    printf("tamanho %d\n", strlen(frase));
    int cont = 0;
    for(int i = 0; i < TAMANHO; i++){
        if(frase[i] != ' ')
            frase[cont++] = frase[i];
    }

    printf("%s\n", frase);

    return 0;
}
