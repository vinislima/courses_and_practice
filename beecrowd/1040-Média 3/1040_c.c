
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char nota1_str[10], nota2_str[10], nota3_str[10], nota4_str[10];
    float nota1, nota2, nota3, nota4;
    float media, calculo_exame, exame;

    scanf("%s %s %s %s", nota1_str, nota2_str, nota3_str, nota4_str);

    nota1 = atof(nota1_str);
    nota2 = atof(nota2_str);
    nota3 = atof(nota3_str);
    nota4 = atof(nota4_str);

    media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 4) + (nota4 * 1)) / 10;

    if (media >= 7.0)
    {
        printf("Media: %.1f\n", media);
        printf("Aluno aprovado.\n");
    }
    else if (media >= 5.0 && media <= 6.9)
    {
        printf("Media: %.1f\n", media);
        printf("Aluno em exame.\n");
        scanf("%f", &exame);
        printf("Nota do exame: %.1f\n", exame);
        calculo_exame = (media + exame) / 2;
        if (calculo_exame >= 5.0)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", calculo_exame);
        }
        else
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", calculo_exame);
        }
    }
    else
    {
        printf("Media: %.1f\n", media);
        printf("Aluno reprovado.\n");
    }
    return 0;
}