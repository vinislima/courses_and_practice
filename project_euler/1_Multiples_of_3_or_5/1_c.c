#include <stdio.h>

int main() {
    int numero = 1000; // limite da contagem
    int soma = 0; // variável para armazenar a soma
    int i;

    for (i = 0; i < numero; i++) { // percorrer o limite solicitado
        if (i % 3 == 0 || i % 5 == 0) { // verificar se o número é múltiplo de 3 ou 5
            soma = soma + i; // realizar a soma com o número testado
        }
    }

    printf("%d\n", soma); // apresentar o resultado

    return 0;
}