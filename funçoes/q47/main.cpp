/*Escreva um template de função que receba três argumentos: x, y e z, que podem ser todos do
tipo inteiro ou float. A função deve retornar a média aritmética dos valores recebidos.
Escreva um programa que solicite 3 números inteiros e 3 números reais e, com ajuda da função,
imprima as médias dos valores de mesmo tipo.*/



#include <iostream>

using namespace std;

template <typename var>

float  media(var a,var b,var c)
{
    return (a+b+c)/3.0;
}


int main()
{
    int int_A,int_B,int_C;
    float real_A,real_B,real_C;

    cout<<"insira 3 numeros inteiros"<<endl;
    cin>> int_A>>int_B>>int_C;

    cout<<"insira 3 numeros racionais"<<endl;
    cin>> real_A>>real_B>>real_C;

    cout<<"A media dos inteiros é :"<<media(int_A,int_B,int_C)<<endl;

    cout<<"A media dos racionais é :"<<media(real_A,real_B,real_C)<<endl;

    return 0;
}
