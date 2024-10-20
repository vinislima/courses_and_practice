
#include <stdio.h>
#include <stdlib.h>

int main() {
     
    char a_str[10], b_str[10], c_str[10];
    
    float a, b, c, base_triangulo, altura_triangulo;
    float raio_circulo, lado_quadrado;
    float base_trapezio1, base_trapezio2, altura_trapezio;
    float lado_retangulo1, lado_retangulo2;
    float area_triangulo, area_circulo, area_trapezio;
    float area_quadrado, area_retangulo;
    double pi;
    
    scanf("%s" "%s" "%s", a_str, b_str, c_str);
    
    a = atof(a_str);
    b = atof(b_str);
    c = atof(c_str);
    
    pi = 3.14159;

    base_triangulo = a;
    altura_triangulo = c;

    raio_circulo = c;

    base_trapezio1 = a;
    base_trapezio2 = b;
    altura_trapezio = c;

    lado_quadrado = b;

    lado_retangulo1 = a;
    lado_retangulo2 = b;

    area_triangulo = (base_triangulo * altura_triangulo) / 2;
    area_circulo = pi * (raio_circulo * raio_circulo);
    area_trapezio = ((base_trapezio1 + base_trapezio2) / 2) * altura_trapezio;
    area_quadrado = lado_quadrado * lado_quadrado;
    area_retangulo = lado_retangulo1 * lado_retangulo2;

    printf("TRIANGULO: %.3f\n", area_triangulo);
    printf("CIRCULO: %.3f\n", area_circulo);
    printf("TRAPEZIO: %.3f\n", area_trapezio);
    printf("QUADRADO: %.3f\n", area_quadrado);
    printf("RETANGULO: %.3f\n", area_retangulo);
 
    return 0;
}