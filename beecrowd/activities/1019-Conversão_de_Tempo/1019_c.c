#include <stdio.h>
 
int main() {
 
    int tempo_informado,cont_segundos, cont_minutos, cont_horas;

    cont_horas = 0;
    cont_minutos = 0;
    cont_segundos = 0;
    
    int a = 0;
    int b = 0;
    int c = 0;

    scanf("%d", &tempo_informado);

    while (tempo_informado >= 3600) {
        a = tempo_informado - 3600;
        tempo_informado = a;
        cont_horas = cont_horas + 1;
    }
    
    while (tempo_informado >= 60) {
        b = tempo_informado - 60;
        tempo_informado = b;
        cont_minutos = cont_minutos + 1;
    }

    while (tempo_informado >= 1) {
        c = tempo_informado - 1;
        tempo_informado = c;
        cont_segundos = cont_segundos + 1;
    }

    printf("%d:%d:%d\n", cont_horas, cont_minutos, cont_segundos);