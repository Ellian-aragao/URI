#include <stdio.h>

int main()
{
    float notas[] = {2, 3, 4, 1};
    float media = 0;
    for (int i = 0; i < 4; i++)
    {
        float aux;
        scanf("%f", &aux);
        notas[i] *= aux;
        media += notas[i];
    }

    media /= 10.0;

    if (media < 5.0)
    {
        printf("Media: %.1f\n", media);
        printf("Aluno reprovado.\n");
    }
    else if (media >= 7.0)
    {
        printf("Media: %.1f\n", media);
        printf("Aluno aprovado.\n");
    }
    else
    {
        float aux;
        scanf("%f", &aux);
        printf("Media: %.1f\n", media);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1f\n", aux);
        media = (media + aux) / 2.0;
        if (media >= 5)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", media);
    }

    return 0;
}