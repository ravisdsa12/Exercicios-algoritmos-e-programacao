#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int lanca_dados (int dado=0)
{
    dado= 1+rand() % 6;
    return dado;
}
int somar (int a,int b,int c)
{


    int valor;
    valor = a+b+c;
    return valor;
}

int main()
{
    srand (time(0));
    int i=0;

    char repetir ='$';

    sint melhor_pontuacao=0;

    while(i<8)
    {
        cout<<"deseja lançar os dados?(s/n)";
        cin>> repetir;
        if(repetir !='n' and repetir!='s')
        {
            continue;
        }
        else if(repetir =='n')
        {
            break;
        }
        int soma_dados;

        int dado[3];
        dado[0]=lanca_dados();
        dado[1]=lanca_dados();
        dado[2]=lanca_dados();

        soma_dados = somar(dado[0],dado[1],dado[2]);

        if(soma_dados > melhor_pontuacao)
        {
            melhor_pontuacao = soma_dados;
        }
        cout<<"Sua melhor pontuação até agora = "<<melhor_pontuacao<<endl;
        cout<<"d1 = "<<dado[0]<<setw(6)<<"d2 = "<<dado[1]<<setw(6)<<"d3 = "<<dado[2]<<endl;
        if (soma_dados>melhor_pontuacao)
        {
            cout<<"voce melhorou sua pontuação..."<<endl;
        }
        else if(soma_dados < melhor_pontuacao)
        {
            cout<<"Não bateu seu recorde..."<<endl;
        }
        i++;
    }



    return 0;
}
