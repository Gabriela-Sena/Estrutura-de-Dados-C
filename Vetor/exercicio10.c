// enunciado confuso 🤔
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int vetor[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        switch (vetor[i])
        {
        case 0:
            printf("zero ");
            break;
        case 1:
            printf("um ");
            break;
        case 2:
            printf("dois ");
            break;
        case 3:
            printf("tres ");
            break;
        case 4:
            printf("quatro ");
            break;
        case 5:
            printf("cinco ");
            break;
        case 6:
            printf("seis ");
            break;
        case 7:
            printf("sete ");
            break;
        case 8:
            printf("oito ");
            break;
        case 9:
            printf("nove ");
            break;
        }
    }
    printf("\n");

    return 0;
}
