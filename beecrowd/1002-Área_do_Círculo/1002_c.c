#include <stdio.h>
 
int main() {
 
   double raio, area;
   const double PI = 3.14159;
   
   scanf("%lf", &raio);
   
   area = (raio * raio) * PI;
   
   printf("A=%.4lf\n", area);
   
    return 0;
}