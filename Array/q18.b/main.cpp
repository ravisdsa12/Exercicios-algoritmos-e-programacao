#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int matriz [5][10]={0};

    int n=0,contador=0,aux=0;


        for(int i=0;i<5;i++){
            for(int j=0;j<10;j++){
                contador+= 2*n +1+aux;
                matriz[i][j] = contador;
                n++;
            }
        contador=0;
        n=0;
        aux++;
        }

        for(int i=0;i<5;i++){
            for(int j=0;j<10;j++){
            cout<< setw(5)<<matriz[i][j];
            }
        cout<<endl;
        }
    return 0;
}
