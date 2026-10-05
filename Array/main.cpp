//Escreva um programa que recebe um vetor de inteiros, calcula a soma de todos os elementos do vetor e
//imprime a soma calculada.
#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
    srand(time(0));
    int quantidade_de_termos=0,
    soma=0,
    valor=0;

    cout<<"quantos valores você quer somar?"<<endl;
    cin>> quantidade_de_termos;

    int vetor[quantidade_de_termos];

    for(int i=0;i<quantidade_de_termos;i++){
        cout<<"qual o "<<i+1<<" º"<<"termo"<<endl;
        cin>>valor;
        vetor[i] = valor;
        soma+= vetor[i];
    }
    cout<<"--->"<<soma<<"<---";

    return 0;
}
