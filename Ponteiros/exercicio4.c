#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float matriz[3][3];

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            matriz[i][j] = i * 1.1 + j;

    printf("Matriz end: %p\n", matriz);

    for(int i = 0; i < 3; i++)
        printf("Vetor end: %p end: %p\n", &matriz[i], matriz[i]);

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            printf("end: %p\n", &matriz[i][j]);

    return 0;
}
