
#include <stdio.h>
 
int main() {
 
    int a, b, c, d;
    int teste1, teste2, teste3, teste4, teste5, resultado;

    scanf("%d" "%d" "%d" "%d", &a, &b, &c, &d);

    teste1 = b > c;
    teste2 = d > a;
    teste3 = (c + d) > (a + b);
    teste4 = (c > 0) && (d > 0);
    teste5 = (a % 2) == 0;
    resultado = teste1 && teste2 && teste3 && teste4 && teste5;

    if (resultado) {
        printf("Valores aceitos\n");
    }
    else {
        printf("Valores nao aceitos\n");
    }
    return 0;
}