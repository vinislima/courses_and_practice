#include <stdio.h>
#include <stdbool.h>

int main() {
    int menor = 1; // definição do menor dividendo
    bool teste = false; // variável que receberá o teste

    while (!teste) { // repetição enquanto não verdadeiro
        // Teste longo para verificar se menor é divisível por todos os números entre 1 e 20
        if (menor % 1 == 0 && menor % 2 == 0 && menor % 3 == 0 && menor % 4 == 0 && menor % 5 == 0 &&
            menor % 6 == 0 && menor % 7 == 0 && menor % 8 == 0 && menor % 9 == 0 && menor % 10 == 0 &&
            menor % 11 == 0 && menor % 12 == 0 && menor % 13 == 0 && menor % 14 == 0 && menor % 15 == 0 &&
            menor % 16 == 0 && menor % 17 == 0 && menor % 18 == 0 && menor % 19 == 0 && menor % 20 == 0) {
            
            printf("%d\n", menor);
            teste = true; // em caso verdadeiro dos testes, variável teste recebe o valor true
        } else {
            menor++; // enquanto não houver verdade no teste, o dividendo é incrementado
        }
    }

    printf("%d\n", menor);
    printf("%d\n", teste);

    return 0;
}