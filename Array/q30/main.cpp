/*30. A fábrica WK produz uma quantidade de automóveis por dia e deseja fazer um levantamento sobre
essa produção. Escreva um programa que leia a quantidade de automóveis produzida diariamente,
enquanto não for digitado um número negativo. Ao final o programa deve mostrar na tela a
quantidade total de automóveis produzida,
a quantidade de dias que foi considerada (ou seja, é a
quantidade de números digitados), e
a quantidade média de carros produzida por dia.*/


#include <iostream>

using namespace std;

int main()
{
    int dias=-1;

    int quantos_carros;
    double quantidade_ttl_carros=0;

    while (quantos_carros != 0 ){

        cin>>quantos_carros;
        quantidade_ttl_carros+=quantos_carros;
        dias++;
        }
    cout<<"quantidade total de carros: "<<quantidade_ttl_carros<<endl;
    cout<<"quantidade total de dias: "<<dias<<endl;
    cout<<"media de carros por dia: "<<quantidade_ttl_carros*1.0 /dias<<endl;

    return 0;
}
