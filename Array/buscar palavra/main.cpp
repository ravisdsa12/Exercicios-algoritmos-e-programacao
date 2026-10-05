#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <cctype>

using namespace std;

int main()
{
    srand(time(0));
    int m,n,o,contador_letra=0;
    cout<<"qual o tamanho do banco de letras?(M*N)"<<endl;
    cin>>m>>n>>o;

    int banco_letras [m][n][o];

    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            for (int k=0;k<o;k++){
                banco_letras[i][j][k]=rand() %10;
                cout<<setw(3)<<banco_letras[i][j][k];
            }
            cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}
