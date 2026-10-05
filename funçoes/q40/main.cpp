/*Escreva funções media sobrecarregadas que retornem, respectivamente:
(a) a média de quatro inteiros;
(b) a média de três valores float;
(c) a média de dois valores double;*/


#include <iostream>

using namespace std;

double media (int a,int b,int c,int d){
    return static_cast<double>(a+b+c+d)/ 4.0;
}
float media (float a,float b , float c){
    return (a+b+c)/3.0;
}

double media (double a,double b){
    return (a+b)/2;
}


int main()
{
    cout<<"media inteiros : "<<media (1,2,2,1)<<endl;
    cout<<"media float : "<<media(3.4,32.3,54.1)<<endl;
    cout<< "media double : "<<media(2.3342,4.3243)<<endl;
    return 0;
}
