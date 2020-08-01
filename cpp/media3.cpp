#include <iostream>
#include <iomanip>
#define PRECISION 1
using namespace std;
int main()
{
    float notas[] = {2, 3, 4, 1};
    float media = 0;
    for (int i = 0; i < 4; i++)
    {
        float aux;
        cin >> aux;
        notas[i] *= aux;
        media += notas[i];
    }

    media /= 10.0;
    cout << fixed;

    if (media < 5.0)
    {
        cout << "Media: " << setprecision(PRECISION) << media << endl;
        cout << "Aluno reprovado." << endl;
    }
    else if (media >= 7.0)
    {
        cout << "Media: " << setprecision(PRECISION) << media << endl;
        cout << "Aluno aprovado." << endl;
    }
    else
    {
        float aux;
        cin >> aux;
        cout << "Media: " << setprecision(PRECISION) << media << endl;
        cout << "Aluno em exame." << endl;
        cout << "Nota do exame: " << setprecision(PRECISION) << aux << endl;
        media = (media + aux) / 2.0;
        if (media >= 5)
        {
            cout << "Aluno aprovado." << endl;
        }
        else
        {
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << setprecision(PRECISION) << media << endl;
    }

    return 0;
}