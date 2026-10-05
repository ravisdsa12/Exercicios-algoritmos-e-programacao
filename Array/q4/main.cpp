#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    srand(time(0));
    int vetor_A[50],
        vetor_B[50];

    cout<<"A--->";
    for(int i=0; i<50; i++)
    {
        vetor_A[i] = rand() %10;

        cout<<setw(3)<<vetor_A [i];

    }
    cout<<endl<<endl;

    cout<<"B--->";
    for(int i=0; i<50; i++)
    {
        vetor_B[i] = vetor_A[49-i];

    }
    for (int i=0;i<50;i++){

        cout<< setw(3)<< vetor_B[i];
    }
    cout<<endl;
    return 0;
}


