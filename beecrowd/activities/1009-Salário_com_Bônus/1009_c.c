
#include <stdio.h>
 
int main() {
 
    char* nome;
    double salario, vendas, total, comissao;
    
    salario = 0;
    vendas = 0;
    total = 0;
    comissao = 0;
    
    scanf("%s", &nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);
    
    total = (vendas * 0.15);
    comissao = total + salario;
    
    printf("TOTAL = R$ %.2lf\n", comissao);
 
    return 0;
}