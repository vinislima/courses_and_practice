
#include <stdio.h>
 
int main() {
 
    int a;
    double b, c, calculo;
    
    scanf("%d", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    
    calculo = b * c;
    
    printf("NUMBER = %d\n", a);
    printf("SALARY = U$ %.2lf\n", calculo);
 
    return 0;
}