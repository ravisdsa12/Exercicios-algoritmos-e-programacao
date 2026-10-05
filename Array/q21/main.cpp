//(21)Escreva um programa que armazene 24 inteiros em um arranjo bidimensional 6 x 4 e imprime três
//inteiros: k, Lin e Col. O inteiro k é o maior elemento de A e é igual a A[Lin][Col].
//Obs.: Se o elemento máximo ocorrer mais de uma vez, indique em Lin e Col qualquer uma das possíveis
//posições.
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int matriz [6][4]={0};
    int k=0,lin=0,col=0;

    for(int i=0;i<6;i++){
        for (int j=0;j<4;j++){
            matriz [i][j] = rand() %10000;
            if (k<matriz[i][j]){
                k=matriz [i][j];
                col=j;
                lin=i;
            }
        }
    }
    cout<<'\t'<<"valor"<<endl<<'\t'<<"|"<<k<<setw(4)<<"|"<<endl<<endl<<setw(10)<<"linha"<<setw(10)<<"coluna"<<endl;
    for (int i=0;i<6;i++){
        for (int j=0;j<4;j++){
            if (matriz[i][j] == k){

                cout<<setw(6)<<setw(6)<<i<<setw(4)<<"|"<<setw(4)<<j<<endl;

            }
        }

    }
    return 0;
}
