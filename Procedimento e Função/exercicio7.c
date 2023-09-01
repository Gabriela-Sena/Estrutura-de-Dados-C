#include <stdio.h>

// char * categoriaNadador(int idade){ // com ponteiro
//     if (idade <= 7)
//         return "Infantil A";
//     if (idade <= 10)
//         return "Infantil B";
//     if (idade <= 13)
//         return "Juvenil A";
//     if (idade <= 17)
//         return "Juvenil B";
//     if (idade >= 18)
//         return "Adulto";
// }

void categoriaNadador(int idade){
    if (idade < 5)
        printf("Idade invalida\n");
    else if (idade <= 7)
        printf("Infantil A\n");
    else if (idade <= 10)
        printf("Infantil B\n");
    else if (idade <= 13)
        printf("Juvenil A\n");
    else if (idade <= 17)
        printf("Juvenil B\n");
    else
        printf("Adulto\n");
}

int main(int argc, char const *argv[])
{
    categoriaNadador(10);
    // printf("%s", categoriaNadador(10));
    return 0;
}
