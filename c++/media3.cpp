#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char *argv[])
{
    float notas[] = {2, 3, 4, 1};
    float media = 0;
    for (int i = 0; i < 4; i++)
    {
        float aux;
        cin >> aux;
        notas[i] *= aux / 10;
        media += notas[i];
    }
    if (media < 5)
    {
        printf("Media: %.1f\nAluno reprovado.", media);
    }
    else if (media < 7)
    {
        float aux;
        cin >> aux;
        media += aux / 2;
        if (media >= 5)
        {
            puts("Aluno aprovado.");
            printf("Mdia final: %.1f")
        }
    }
    return 0;
}