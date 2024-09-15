#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int a, b, teste;
    char a_str[10], b_str[10];

    scanf("%s" "%s", a_str, b_str);

    a = atoi(a_str);
    b = atoi(b_str);

    if (a > b)
    {
        teste = a % b;
        if (teste == 0)
        {
            printf("Sao Multiplos\n");
        }
        else
        {
            printf("Nao sao Multiplos\n");
        }
    }
    else
    {
        teste = b % a;
        if (teste == 0)
        {
            printf("Sao Multiplos\n");
        }
        else
        {
            printf("Nao sao Multiplos\n");
        }
    }

    return 0;
}