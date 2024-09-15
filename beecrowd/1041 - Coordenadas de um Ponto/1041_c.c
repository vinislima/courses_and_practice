#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float x, y;
    char x_str[10], y_str[10];

    scanf("%s" "%s", x_str, y_str);

    x = atof(x_str);
    y = atof(y_str);

    if ( y > 0.0 && x > 0.0)
    {
        printf("Q1\n");
    }
    else if (y < 0.0 && x > 0.0)
    {
        printf("Q4\n");
    }
    else if (y > 0.0 && x < 0.0)
    {
        printf("Q2\n");
    }
    else if (y < 0.0 && x < 0.0)
    {
        printf("Q3\n");
    }
    else if (y == 0.0 && (x < 0.0 || x > 0.0))
    {
        printf("Eixo X\n");
    }
    else if (x == 0.0 && (y < 0.0 || y > 0.0))
    {
        printf("Eixo Y\n");
    }
    else
    {
        printf("Origem\n");
    }
    return 0;
}