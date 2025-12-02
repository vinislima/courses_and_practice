
#include <stdio.h>
 
int main() {
 
    double A, B, C, media, media1;
    
    media = 0;
    media1 = 0;
    
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    
    media1 = ((A * 2) + (B * 3) + (C * 5));
    media = media1 / 10;
    
    printf("MEDIA = %.1lf\n", media);
 
    return 0;
}