#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int vetor_teste[21],
        vetor_V[20];
    srand(time(0));

    for (int i =0; i<21; i++)
    {
        vetor_teste[i] = rand() % 20;
    }


    for (int i =0; i<20; i++)
    {
        vetor_V[i] = vetor_teste[i];
    }
    for (int i =0; i<20; i++)
    {
        if(vetor_V[i]==vetor_teste[20])
        {
            cout<< "o valor chave foi encontrado na posição: "<< i;
            return 0;
        }
    }

    cout<<"valor chave não foi encontrado";

    return 0;
}
