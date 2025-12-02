
#include <stdio.h>
 
int main() {
 
    float tempo, velocidade, consumo;

    scanf("%f", &tempo);
    scanf("%f", &velocidade);

    consumo = (tempo * velocidade) / 12;

    printf("%.3f\n", consumo);
 
    return 0;
}