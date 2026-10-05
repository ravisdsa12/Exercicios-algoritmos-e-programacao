#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool ordCres (int i, int j)
{
    return i>j;
}
bool ordDecres (int i, int j)
{
    return i<j;
}


void bubblesort(int vetor[],int tamanho,bool(*tipo)(int,int))
{

    for (int i =0; i<tamanho; i++)
    {
        for(int j =0; j<tamanho-i-1; j++)
        {
            if (tipo(vetor [j],vetor[j+1]))
            {
                int temp = vetor [j];
                vetor [j]=vetor [j+1];
                vetor[j+1]=temp;

            }
        }
    }

}
void executar (int vetor[],int tamanho,bool (*qualtipo)(int,int))
{

    bubblesort (vetor,tamanho,qualtipo);

    for(int i =0; i<tamanho; i++)
    {
        cout<<vetor[i]<<endl;
    }

}


int main()
{
    srand(time(0));
    int tamanho;

    cin >>tamanho;
    int vetor[100];

    for(int i=0;i<tamanho;i++){
        vetor[i] =rand() %101;
    }
    char ordem;
    cin>>ordem;
    if (ordem=='c'){
        executar (vetor,tamanho,ordCres);
    }
    else if (ordem=='d'){
        executar (vetor,tamanho,ordDecres);
    }

    return 0;
}
