
#include <stdio.h>
#include <stdbool.h>

int main() {
    long long inicial = 600851475143; // valor inicial do exercício
    long long divisor = 2; // menor divisor além do 1
    long long divisao;
    bool teste_divisao;

    while (inicial != divisor) { // enquanto o valor inicial não for igual ao divisor, o código continua executando
        divisao = inicial / divisor; // divisão entre o valor inicial e divisor
        teste_divisao = (inicial % divisor == 0); // testa se o resto da divisão é zero

        if (!teste_divisao) { // enquanto o teste retornar falso
            divisor++; // o divisor é incrementado
        } else { // quando retorna verdadeiro
            inicial = divisao; // o novo valor da divisão assume o valor inicial
        }
    }

    // No final é apresentado o maior fator primo
    printf("Maior fator primo: %lld\n", inicial);

    return 0;
}