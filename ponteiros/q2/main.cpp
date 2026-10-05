#include <iostream>

using namespace std;

void troca (int* a, int* b){
    int temporaria = *a;

    *a=*b;

    *b=temporaria;

}



int main()
{
    int x,y;
    cin>>x>>y;
    cout<<x<<endl<<y<<endl;

    troca (&x,&y);

    cout<<x<<endl<<y<<endl;

    return 0;
}
