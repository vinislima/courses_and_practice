
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    char x1_str[10], y1_str[10], x2_str[10], y2_str[10];
    float x1, y1, x2, y2, distancia;

    scanf("%s" "%s", &x1_str, &y1_str);
    scanf("%s" "%s", &x2_str, &y2_str);

    x1 = atof(x1_str);
    y1 = atof(y1_str);
    x2 = atof(x2_str);
    y2 = atof(y2_str);

    distancia = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));

    printf("%.4f\n", distancia);

    return 0;
}