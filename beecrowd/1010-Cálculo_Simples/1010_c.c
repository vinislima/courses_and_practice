
#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    char codigo[100], peca[10], valor_str[10];
    char codigo1[100], peca1[10], valor1_str[10];
    int peca_int, peca1_int;
    float valor, valor1;
    float calculo, calculo1, total;

    // Entrada de dados
    scanf("%s %s %s", codigo, peca, valor_str);
    scanf("%s %s %s", codigo1, peca1, valor1_str);

    // Conversão de string para inteiro e float
    peca_int = atoi(peca);
    valor = atof(valor_str);

    peca1_int = atoi(peca1);
    valor1 = atof(valor1_str);

    // Cálculos   
    calculo = peca_int * valor;
    calculo1 = peca1_int * valor1;
    total = calculo + calculo1;

    // Apresentação do resultado
    printf("VALOR A PAGAR: R$ %.2f\n", total);
    
    return 0;
}