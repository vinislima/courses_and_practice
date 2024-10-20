
#include <stdio.h>
 
int main() {
 
    float x, y, consumo;
    
    scanf("%f", &x);
    scanf("%f", &y);

    consumo = x / y;

    printf("%.3f km/l\n", consumo);
 
    return 0;
}