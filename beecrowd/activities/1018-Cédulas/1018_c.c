
#include <stdio.h>
 
int main() {
 
    int valor, valor_cont, cem, cinquenta, vinte, dez, cinco, dois, um;
    int cont_cem, cont_cinquenta, cont_vinte, cont_dez, cont_cinco, cont_dois, cont_um;
    int a, b, c, d, e, f, g;

    scanf("%d", &valor);

    valor_cont = valor;

    cem = 100;
    cinquenta = 50;
    vinte = 20;
    dez = 10;
    cinco = 5;
    dois = 2;
    um = 1;

    cont_cem = 0;
    cont_cinquenta = 0;
    cont_vinte = 0;
    cont_dez = 0;
    cont_cinco = 0;
    cont_dois = 0;
    cont_um = 0;

    a = 0;
    b = 0;
    c = 0;
    d = 0;
    e = 0;
    f = 0;
    g = 0;

    while (valor_cont >= cem) {
        a = valor_cont - 100;
        valor_cont = a;
        cont_cem = cont_cem + 1;
    }
    
    while (valor_cont >= cinquenta) {
        b = valor_cont - 50;
        valor_cont = b;
        cont_cinquenta = cont_cinquenta + 1;
    }

    while (valor_cont >= vinte) {
        c = valor_cont - 20;
        valor_cont = c;
        cont_vinte = cont_vinte + 1;
    }

    while (valor_cont >= dez) {
        d = valor_cont - 10;
        valor_cont = d;
        cont_dez = cont_dez + 1;
    }

    while (valor_cont >= cinco) {
        e = valor_cont - 5;
        valor_cont = e;
        cont_cinco = cont_cinco + 1;
    }

    while (valor_cont >= dois) {
        f = valor_cont - 2;
        valor_cont = f;
        cont_dois = cont_dois + 1;
    }

    while (valor_cont >= um) {
        g = valor_cont - 1;
        valor_cont = g;
        cont_um = cont_um + 1;
    }

    printf("%d\n", valor);
    printf("%d nota(s) de R$ 100,00\n", cont_cem);
    printf("%d nota(s) de R$ 50,00\n", cont_cinquenta);
    printf("%d nota(s) de R$ 20,00\n", cont_vinte);
    printf("%d nota(s) de R$ 10,00\n", cont_dez);
    printf("%d nota(s) de R$ 5,00\n", cont_cinco);
    printf("%d nota(s) de R$ 2,00\n", cont_dois);
    printf("%d nota(s) de R$ 1,00\n", cont_um);
 
    return 0;
}