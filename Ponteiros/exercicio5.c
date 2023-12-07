#include <stdio.h>

int main(int argc, char const *argv[])
{
    int vetor[5] = {1, 2, 3, 4, 5};
    int *p = vetor;

    for(int i = 0; i < 5; i++){
        printf("%d ", *(p + i) * 2); 
    }



    return 0;
}
