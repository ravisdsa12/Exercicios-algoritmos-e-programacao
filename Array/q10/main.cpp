/*Escreva um programa que recebe 20 valores inteiros positivos e armazena 10 desses valores no
vetor A e 10 no vetor B. Em seguida, o programa deve preencher um terceiro vetor C de acordo com os
seguintes critérios:
Ci deverá receber 1 quando Ai for maior que Bi ;
Ci deverá receber 0 quando Ai for igual a Bi ;
Ci deverá receber -1 quando Ai for menor que Bi .
Por fim, o programa deve imprimir A, B e C. */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int
        vetor_X[20],
        vetor_A[10],
        vetor_B[10],
        vetor_C[10];

    for(int i=0; i<20; i++)
    {
        vetor_X[i] = rand() %10;
    }
    for(int i=0; i<20; i++)
    {
        if (i<10)
        {
            vetor_A[i]=vetor_X[i];
        }
        else
        {
            vetor_B[i-10] = vetor_X[i];
        }
    }
    cout<<"A--->";

    for(int i=0; i<10; i++)
    {
        cout<<setw(3)<<vetor_A[i];
    }
    cout<<endl;

    cout<<"B--->";

    for(int i=0; i<10; i++)
    {
        cout<<setw(3)<<vetor_B[i];
    }
    cout<<endl;


    for(int i=0; i<10; i++)
    {
        if (vetor_A[i]> vetor_B[i])
        {
            vetor_C[i] = 1;
        }
        else if (vetor_A[i]==vetor_B[i])
        {
            vetor_C[i] = 0;
        }
        else
        {
            vetor_C[i]= (-1);
        }

    }
    cout<<"C --->";
    for(int i=0; i<10; i++)
    {
        cout<<setw(3)<<vetor_C[i];
    }

    cout<<endl;

    return 0;
}
