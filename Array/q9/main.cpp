#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int vetor [20];
    srand(time(0));

    for(int i=0; i<20; i++)
    {
        cin>>vetor[i];
    }
    for(int i=0; i<20; i++)
    {

        if (vetor[i] % 2 != 0)
        {
            cout << "falso"<<endl;
            return 0;
        }
    }
    cout<<"verdadeiro";

    return 0;
}
