
#include <stdio.h>
#include <stdbool.h> // Para usar o tipo bool
#include <stdlib.h> // Para usar a função atoi()
#include <string.h> // Inclui a biblioteca string.h para usar strlen()

// Função para verificar se uma string é um palíndromo
bool eh_palindromo(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int maior_palindromo = 0; // Variável que recebe o maior palíndromo
    char produto_str[10]; // String para armazenar o produto como string

    for (int i = 100; i < 1000; i++) {  // Loop para o primeiro número de três dígitos
        for (int j = 100; j < 1000; j++) {  // Loop para o segundo número de três dígitos
            int produto = i * j;
            sprintf(produto_str, "%d", produto); // Converte o produto para string
            
            // Verifica se o produto é um palíndromo e se é maior do que o maior palíndromo encontrado até agora
            if (eh_palindromo(produto_str) && produto > maior_palindromo) {
                maior_palindromo = produto;
            }
        }
    }

    printf("Maior palíndromo: %d\n", maior_palindromo);

    return 0;
}