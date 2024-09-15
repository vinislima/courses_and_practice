#include <stdio.h>

int main() {
    int natural_soma = 0; // variável para somar os números não elevados
    int natural_soma_elevado = 0; // variável para armazenar a soma elevada ao quadrado
    int natural_elevado = 0; // variável para somar os números elevados ao quadrado
    int resultado = 0;

    // Loop para somar os números de 1 a 100
    for (int i = 1; i <= 100; i++) {
        natural_soma += i; // soma e atualiza a variável
    }
    natural_soma_elevado = natural_soma * natural_soma; // eleva a soma ao quadrado

    // Loop para somar os quadrados dos números de 1 a 100
    for (int j = 1; j <= 100; j++) {
        natural_elevado += j * j; // eleva o número ao quadrado, soma e atualiza a variável
    }

    resultado = natural_soma_elevado - natural_elevado; // faz a subtração

    // imprime os resultados
    printf("Soma dos números de 1 a 100 elevada ao quadrado: %d\n", natural_soma_elevado);
    printf("Soma dos quadrados dos números de 1 a 100: %d\n", natural_elevado);
    printf("Resultado: %d\n", resultado);

    return 0;
}