#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float vetor[10];

    for(int i = 0; i < 10; i++)
        vetor[i] = i * 1.1;

    for(int i = 0; i < 10; i++)
        printf("end: %p\n", &vetor[i]);

    return 0;
}
