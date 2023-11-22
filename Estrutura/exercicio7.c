#include <stdio.h>
#include <stdlib.h>

struct hora
{
    int hora;
    int minuto;
    int segundo;
};
typedef struct hora hora;

void preencher(hora *hora){
    (*hora).hora = rand() % 24;
    (*hora).minuto = rand() % 60;
    (*hora).segundo = rand() % 60;
}

void imprimir(hora hora){
    printf("%d:%d:%d\n", hora.hora, hora.minuto, hora.segundo);
}

int main(){
    hora horas[5];

    for (int i = 0; i < 5; i++){
        preencher(&horas[i]);
        imprimir(horas[i]);
    }

    hora maiorHora = horas[0];  

    for (int i = 0; i < 5; i++){
        if (horas[i].hora > maiorHora.hora)
            maiorHora = horas[i];
        else if(horas[i].hora == maiorHora.hora)
            if(horas[i].minuto > maiorHora.minuto)
                maiorHora = horas[i];
            else if(horas[i].minuto == maiorHora.minuto)
                if(horas[i].segundo > maiorHora.segundo)
                    maiorHora = horas[i];
    }

    printf("Maior hora\n");
    imprimir(maiorHora);

    return 0;
}
