
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

    void troca (int vetor[],int tamanho){
    for (int i=0;i<tamanho;i++){
        for (int j =0;j<tamanho-i-1;j++){
            if(vetor[j]>vetor[j+1]){
               int temp=vetor[j];
               vetor[j] =vetor[j+1];
               vetor[j+1] = temp;
            }

        }

    }
}
int busca(int vetor[],int tamanho,int termo){
    int inicio=0;
    int fim = tamanho-1;
    while (fim>=inicio){
        int meio = (fim + inicio)/2;
        if (vetor[meio] ==termo){
            return meio;
        }
        if (vetor[meio]<termo){
            inicio = meio+1;

        }
        else{
            fim = meio - 1;
        }


    }
    return -1;
}

int main()
{
    srand(time(0));
    int valores[10];
    int resultado;

    for(int i=0;i<10;i++){
        valores[i]=rand() %1000;
    }
    troca(valores,10);
    for(int i=0;i<10;i++){
       cout<< valores[i]<<"    "<<endl;
    }
    int termo;
    cin >>termo;

    resultado = busca(valores, 10,termo);

    cout<<resultado<<endl;
    if(resultado == -1){
        cout<<"valor n encontrado"<<endl;
    }



    return 0;
}
