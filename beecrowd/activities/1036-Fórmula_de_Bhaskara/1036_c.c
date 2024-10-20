#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main() {
 
    char a_str[10], b_str[10], c_str[10];
    double a, b, c, discriminante, raiz, x1, x2;

    scanf("%s" "%s" "%s", &a_str, &b_str, &c_str);

    a = atof(a_str);
    b = atof(b_str);
    c = atof(c_str);

    discriminante = (b * b) - ((4 * a) * c);

    if (a <= 0 || b <= 0 || c <= 0 || discriminante <= 0) {
        printf("Impossivel calcular\n");
    } else {
        raiz = sqrt(discriminante);
        x1 = ((-(b)) + raiz) / (2 * a);
        x2 = ((-(b)) - raiz) / (2 * a);
        
        printf("R1 = %.5lf\n", x1);
        printf("R2 = %.5lf\n", x2);
    }
 
    return 0;
}