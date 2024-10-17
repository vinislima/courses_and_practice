
#include <stdio.h>
 
int main() {
 
    float entrada, valor;
    float a, b, c, d, e, f, g, h, i, j, k, l;
    int cem_nota, cinquenta_nota, vinte_nota, dez_nota, cinco_nota, dois_nota;
    int um_moeda, cinquenta_moeda, vintecinco_moeda, dez_moeda, cinco_moeda, umcentavo_moeda;

    scanf("%f", &entrada);

    valor = entrada * 100;

    a = 0;
    b = 0;
    c = 0;
    d = 0;
    e = 0;
    g = 0;
    h = 0;
    i = 0;
    j = 0;
    k = 0;
    l = 0;

    cem_nota = 0;
    cinquenta_nota = 0;
    vinte_nota = 0;
    dez_nota = 0;
    cinco_nota = 0;
    dois_nota = 0;
    um_moeda = 0;
    cinquenta_moeda = 0;
    vintecinco_moeda = 0;
    dez_moeda = 0;
    cinco_moeda = 0;
    umcentavo_moeda = 0;

    while (valor >= 10000) {
        a = valor - 10000;
        valor = a;
        cem_nota += 1;
    }

    while (valor >= 5000) {
        b = valor - 5000;
        valor = b;
        cinquenta_nota += 1;
    }

    while (valor >= 2000) {
        c = valor - 2000;
        valor = c;
        vinte_nota += 1;
    }

    while (valor >= 1000) {
        d = valor - 1000;
        valor = d;
        dez_nota += 1;
    }

    while (valor >= 500) {
        e = valor - 500;
        valor = e;
        cinco_nota += 1;
    }

    while (valor >= 200) {
        f = valor - 200;
        valor = f;
        dois_nota += 1;
    }

    while (valor >= 100) {
        g = valor - 100;
        valor = g;
        um_moeda += 1;
    }

    while (valor >= 50) {
        h = valor - 50;
        valor = h;
        cinquenta_moeda += 1;
    }

    while (valor >= 25) {
        i = valor - 25;
        valor = i;
        vintecinco_moeda += 1;
    }

    while (valor >= 10) {
        j = valor - 10;
        valor = j;
        dez_moeda += 1;
    }

    while (valor >= 5) {
        k = valor - 5;
        valor = k;
        cinco_moeda += 1;
    }

    while (valor >= 1) {
        l = valor - 1;
        valor = l;
        umcentavo_moeda += 1;
    }

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", cem_nota);
    printf("%d nota(s) de R$ 50.00\n", cinquenta_nota);
    printf("%d nota(s) de R$ 20.00\n", vinte_nota);
    printf("%d nota(s) de R$ 10.00\n", dez_nota);
    printf("%d nota(s) de R$ 5.00\n", cinco_nota);
    printf("%d nota(s) de R$ 2.00\n", dois_nota);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", um_moeda);
    printf("%d moeda(s) de R$ 0.50\n", cinquenta_moeda);
    printf("%d moeda(s) de R$ 0.25\n", vintecinco_moeda);
    printf("%d moeda(s) de R$ 0.10\n", dez_moeda);
    printf("%d moeda(s) de R$ 0.05\n", cinco_moeda);
    printf("%d moeda(s) de R$ 0.01\n", umcentavo_moeda);
 
    return 0;
}