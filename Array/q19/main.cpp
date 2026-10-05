#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>

using namespace std;

int main(){
    int m=0,n=0,linha=0,coluna=0;
    cin>> m>>n;
    int matriz_A[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            matriz_A[i][j]=0;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matriz_A[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<setw(3)<<matriz_A[i][j];
        }
    cout<<endl;
    }
    cout<<"voce quer a soma de qual das linhas?"<<endl;
    cin>>linha;
    linha=linha-1;
    cout<<"soma da linha "<<linha<<"-->";
        int soma_da_linha=0;
        for(int j=0;j<n;j++){
            soma_da_linha+=matriz_A[linha][j];
            cout<<matriz_A[linha][j]<<" + ";
        }

    cout<<" = "<<soma_da_linha<<endl;

    cout<<"voce quer a soma de qual das colunas?"<<endl;
    cin>>coluna;
    coluna=coluna-1;

    cout<<"soma da coluna "<<coluna<<"-->";
        int soma_da_coluna=0;
        for(int i=0;i<m;i++){
            soma_da_coluna+=matriz_A[i][coluna];
            cout<<matriz_A[i][coluna]<<" + ";
        }

    cout<<"="<<soma_da_coluna<<endl;


    return 0;
}
