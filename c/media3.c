#include <stdio.h>

int main(int argc, char *argv[])
{
    float notas[] = {2, 3, 4, 1};
    float media = 0;
    for (int i = 0; i < 4; i++)
    {
        float aux;
        scanf("%f", &aux);
        notas[i] *= aux / 10;
        media += notas[i];
    }

    if (media < 5)
    {
        printf("Media: %.1f\n",media);
        puts("Aluno reprovado.");
    }
    else if (media < 7)
    {
        float aux;
        scanf("%f", &aux);
        printf("Media: %.1f\n",media);
        puts("Aluno em exame.");
        printf("Nota do exame: %.1f\n",aux);
        media = (media + aux) / 2;
        if (media >= 5)
        {
            puts("Aluno aprovado.");
        }
        else
        {
            puts("Aluno reprovado.");
        }
        printf("Media final: %.1f\n", media);
    }
    else
    {
        printf("Media: %.1f\n",media);
        puts("Aluno aprovado.");
    }

    return 0;
}