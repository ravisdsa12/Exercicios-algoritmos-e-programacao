#include <iostream>

using namespace std;


int somar (int x,int y){
    return x+y;
}


void executar (int x,int y,int (*operar)(int,int)){
   int resultado;

   resultado =  operar (x,y);

    cout<<x<<endl<<y<<endl<<resultado;
}



int main()
{
    int x =10;
    int y=432;

    executar(x,y,somar);

    return 0;
}
