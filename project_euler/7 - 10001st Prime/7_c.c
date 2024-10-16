
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> // Para a função malloc e free

// Função para verificar se um número é primo
bool num_primo(int numero)
{
	if (numero <= 1)
		return false; // Números menores ou iguais a 1 não são primos

	int a = numero;
	int b = 2;
	bool primo = true;

    // Verifica se existe algum divisor até a raiz quadrada de 'numero'
    while (b * b <= a) {
        if (numero % b == 0) {
            primo = false; // 'numero' não é primo se for divisível por 'b'
            break;
        }
        b++;
    }

    return primo; // Retorna verdadeiro se 'numero' for primo, falso caso contrário
}

// Função para gerar uma lista de primos até um certo limite
int* gerar_primos(int limite, int *quantidade) {
    int* primos = (int*) malloc(limite * sizeof(int)); // Aloca memória para o array de primos
    int numero = 2;
    int count = 0; // Contador de primos encontrados

    while (count < limite) {
        if (num_primo(numero)) {
            primos[count] = numero; // Armazena o primo no array
            count++;
        }
        numero++;
    }

    *quantidade = count; // Atualiza a quantidade de primos encontrados
    return primos; // Retorna o array de primos
}

int main() {
    int limite = 10001; // Quantidade de primos a serem encontrados
    int quantidade;
    int* primos = gerar_primos(limite, &quantidade); // Chama a função para gerar primos

    int ultimo_primo = primos[quantidade - 1]; // Último primo encontrado
    printf("Último primo encontrado: %d\n", ultimo_primo); // Imprime o último primo

    free(primos); // Libera a memória alocada para o array de primos

    return 0;
}