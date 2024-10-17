
#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int a, b, c;
    int MaiorAB, MaiorC, x;

    scanf("%d" "%d" "%d", &a, &b, &c);

    MaiorAB = (a + b + abs(a - b)) / 2;

    MaiorC = (MaiorAB + c + abs(MaiorAB - c)) / 2;

    x = MaiorC;

    printf("%d eh o maior\n", x);
 
    return 0;
}