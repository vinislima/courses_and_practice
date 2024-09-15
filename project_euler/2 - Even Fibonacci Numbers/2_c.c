#include <stdio.h>

int main() {
    int inicial[] = {1, 2}; // lista inicial
    int resto = 0; // variável para acumular os ímpares
    int par = 0; // variável para acumular os pares
    int a = 0; // variável para índice
    int b = 1; // variável para índice
    int c = 0; // variável para somar o último número
    int i; // variável para o incremento de índice
    int limite = 4000000; // limite estipulado pelo exercício

    while (c < limite) { // recorrência enquanto o último número for menor que o limite
        c = inicial[a] + inicial[b]; // soma para o último número
        if (c < limite) { // teste para verificar se o último número não é maior que o limite
            inicial[b + 1] = c; // acrescenta na lista
            a = b; // altera o índice para o penúltimo item da lista
            b++; // altera o índice para o último item da lista
        }
    }

    // Imprime a lista apenas para verificar
    printf("Lista gerada:\n");
    for (i = 0; i <= b; i++) {
        printf("%d ", inicial[i]);
    }
    printf("\n");

    // Calcula a soma dos pares e dos ímpares
    for (i = 0; i <= b; i++) {
        if (inicial[i] % 2 == 0) {
            par += inicial[i]; // soma os números pares
        } else {
            resto += inicial[i]; // soma os números ímpares
        }
    }

    // Imprime o resultado da soma dos pares
    printf("Soma dos pares: %d\n", par);

    return 0;
}