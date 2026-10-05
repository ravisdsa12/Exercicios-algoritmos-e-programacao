#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>

using namespace std;

int main(){
    int m=0,n=0,linha=0,coluna=0,soma_da_linha=0,soma_da_coluna=0,soma_total=0;
    cin>> m>>n;
    int matriz_A[m][n],matriz_B[m+1][n+1];



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

    cout<<"matriz A -->"<<endl;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<setw(3)<<matriz_A[i][j];
        }
    cout<<endl;
    }
    cout<<"matriz B -->"<<endl;
    for(int i=0;i<m+1;i++){
        for(int j=0;j<n+1;j++){
            matriz_B[i][j]=0;
        }
    }

     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            matriz_B[i][j]=matriz_A[i][j];
        }
    }
    for(int i=0;i<m+1;i++){
        for(int j=0;j<n+1;j++){
            soma_da_linha+=matriz_B[i][j];
            soma_total+=soma_da_linha;
        }
        matriz_B[i][n] =soma_da_linha;

        soma_da_linha=0;
    }
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            soma_da_coluna+=matriz_B[j][i];
            soma_total+= soma_da_coluna;
        }
        matriz_B[m][i] =soma_da_coluna;

        soma_da_coluna=0;
       }
    matriz_B[m][n] = soma_total;


    for(int i=0;i<m+1;i++){
        for(int j=0;j<n+1;j++){
            cout<<setw(3)<<matriz_B[i][j];
        }
    cout<<endl;
    }
    return 0;
}
