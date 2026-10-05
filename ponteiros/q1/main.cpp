#include <iostream>

using namespace std;

int main()
{
    int inteiro=30;
    float real=234.43;

    int* pntInteiro=&inteiro;
    float* pntReal=&real;

    cout<<"valores do inteiro!"<<endl;
    cout<< "valor do inteiro ; "<<inteiro<<endl;
    cout<< "endereço inteiro ; "<<&inteiro<<endl;
    cout<<"valor do ponteiro : "<<pntInteiro<<endl;
    cout<<"endereço ponteiro : "<<&pntInteiro<<endl;
    cout<<"valor que o ponteiro aponta : "<<*pntInteiro<<endl;


    cout<<"valores do Real!"<<endl;
    cout<< "valor do real ; "<<real<<endl;
    cout<< "endereço real ; "<<&real<<endl;
    cout<<"valor do real : "<<pntReal<<endl;
    cout<<"endereço real : "<<&pntReal<<endl;
    cout<<"valor que o ponteiro aponta : "<<*pntReal<<endl;
    return 0;
}
