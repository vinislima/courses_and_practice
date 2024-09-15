
#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int codigo_lista[] = {1, 2, 3, 4, 5};
    float preco_lista[] = {4.00, 4.50, 5.00, 2.00, 1.50};
    float total = 0;
    int codigo;
    float quantidade;

    char codigo_str[10], quantidade_str[10];

    scanf("%s %s", codigo_str, quantidade_str);

    codigo = atoi(codigo_str);
    quantidade = atof(quantidade_str);

    total = (preco_lista[codigo - 1]) * quantidade;

    printf("Total: R$ %.2f\n",total);
 
    return 0;
}