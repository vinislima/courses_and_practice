#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float a, b, c;
    char a_str[10], b_str[10], c_str[10];
    float teste, teste_triangulo1, teste_triangulo2, teste_triangulo3;
    float perimetro, area;

    scanf("%s" "%s" "%s", a_str, b_str, c_str);

    a = atof(a_str);
    b = atof(b_str);
    c = atof(c_str);

    teste_triangulo1 = (a + b) > c;
    teste_triangulo2 = (b + c) > a;
    teste_triangulo3 = (a + c) > b;

    teste = teste_triangulo1 == teste_triangulo2 == teste_triangulo3;

    if (teste)
    {
        perimetro = a + b + c;
        printf("Perimetro = %.1f\n", perimetro);
    }
    else
    {
        area = ((a + b) * c) / 2;
        printf("Area = %.1f\n", area);
    }
    return 0;
}