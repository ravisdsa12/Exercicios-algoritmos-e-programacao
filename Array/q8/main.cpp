#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    srand(time(0));

    int vetor_A[5],
        vetor_B[5],
        vetor_C[5];

    for(int i=0; i<5; i++)
    {
        vetor_A[i] = rand() %10;


    }


    for(int i=0; i<5; i++)
    {
        vetor_B[i] = rand()  %10;

    }


    for (int i=0; i<5; i++)
    {
        vetor_C[i] = vetor_A[i] + vetor_B[i] ;
    }


    for (int i=0; i<5; i++){

        cout<<setw(3)<< vetor_C[i];

     }

    cout<<endl;
    return 0;
}
