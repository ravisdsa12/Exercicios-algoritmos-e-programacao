#include <iostream>

using namespace std;

int quadrado (int a){
    return a*a;
}


int main()
{
    int valor;
    cin>> valor;
    cout<<quadrado (valor);

    return 0;
}
