#include <stdio.h>
 
int main() {
 
    double a = 0;

    scanf("%lf", &a);

    if (a < 0 || a >= 100.01) 
    {
        printf("Fora de intervalo\n");
    } else if (a >= 75.01)
    {
        printf("Intervalo (75,100]\n");
    } else if (a >= 50.01)
    {
        printf("Intervalo (50,75]\n");
    } else if (a >= 25.01)
    {
        printf("Intervalo (25,50]\n");
    } else
    {
        printf("Intervalo [0,25]\n");
    }
 
    return 0;
}