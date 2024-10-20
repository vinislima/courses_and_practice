
#include <stdio.h>
 
int main() {
 
    int dias_informado,cont_anos, cont_meses, cont_dias;

    cont_anos = 0;
    cont_meses = 0;
    cont_dias = 0;

    int a = 0;
    int b = 0;
    int c = 0;

    scanf("%d", &dias_informado);

    while (dias_informado >= 365) {
        a = dias_informado - 365;
        dias_informado = a;
        cont_anos += 1;
    }
    
    while (dias_informado >= 30) {
        b = dias_informado - 30;
        dias_informado = b;
        cont_meses += 1;
    }

    while (dias_informado >= 1) {
        c = dias_informado - 1;
        dias_informado = c;
        cont_dias += 1;
    }

    printf("%d ano(s)\n", cont_anos);
    printf("%d mes(es)\n", cont_meses);
    printf("%d dia(s)\n", cont_dias);
 
    return 0;
}