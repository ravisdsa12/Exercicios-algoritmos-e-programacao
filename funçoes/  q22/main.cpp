#include <iostream>

using namespace std;


int teste_primo (int a)
{
    bool primo=true;
    if(a<1){
    primo = false;
    }

    for(int i=2; i<=a; i++)
    {
        if(a % i==0 and i!= a)
        {
            primo = false;
            continue;
        }
    }

    if (primo == true)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main() {

    int m;
    cin>>m;
    int resultado = teste_primo (m);

    cout << resultado;

return 0;
}
