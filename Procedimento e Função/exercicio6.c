#include <stdio.h>

int idadeEmDias(int dias, int meses, int anos){
    return anos * 365 + meses * 30 + dias;
}

int main(int argc, char const *argv[])
{
    int dias, meses, anos;
    printf("Digite os dias, meses e anos: ");
    scanf("%d%d%d", &dias, &meses, &anos);

    printf("Idade em dias: %d\n", idadeEmDias(dias, meses, anos));
    return 0;
}
