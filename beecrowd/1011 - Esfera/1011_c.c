
#include <stdio.h>
 
int main() {
 
   double r, volume, pi;
   
   pi = 3.14159;
   r = 0;
   
   scanf("%lf", &r);
   
   volume = (4.0 / 3) * pi * ((r * r) * r);
   
   printf("VOLUME = %.3lf\n", volume);
 
    return 0;
}