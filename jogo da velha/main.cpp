#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cctype>

using namespace std;

int main(){

    char matriz [3][3] = {0};

    int linha=0,coluna=0;

    int cont=0;

    char simbolo,simbolo_2='$'; //so para no inicio o codigo n detectar que os dois simbolos são iguais

    bool ganhou = false;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        matriz[i][j] = '*';
        }

    }
    while(cont<9 and ganhou==false){

        cout<<"qual o seu simbolo?(ou X ou O)"<<endl;
        cin >> simbolo;
        simbolo = toupper(simbolo);



        cout<< "qual a linha escolhida?(entre 0 e 2)"<<endl;
        cin>>linha;
        if(linha!=0 and linha!=1 and linha!=2){
            cout<<"linha invalida, tente novamente"<<endl;
            continue;
        }

        cout<< "qual a coluna escolhida(entre 0 e 2)?"<<endl;
        cin>>coluna;



        if(simbolo==simbolo_2){
            cout<<"voce n pode jogar duas vezes seguidas,LADRÂO!!"<<endl;
            continue;
        }
        simbolo_2=simbolo;

        if (matriz[linha][coluna]!= '*'){
            cout<<"esta casa ja está ocupada, escolha outra!"<<endl;
            simbolo_2 = 0;

            continue;
        }
        if(simbolo=='X'){
            matriz[linha][coluna] = 'X';
        }
        else if (simbolo =='O'){
            matriz [linha][coluna]= 'O';
        }
        else {
            cout<<"Símbolo invalido tente novamente"<<endl;
            continue;
        }
        for(int i=0;i< 3;i++){
            for(int j =0 ; j<3;j++){
                cout<<setw(3)<<matriz[i][j];
        }
            cout<<endl;
        }

        for(int i =0;i<3;i++){
            if(matriz[i][0]==matriz[i][1] and matriz [i][1]==matriz[i][2] and matriz[i][0]!='*'){
                if(simbolo=='X'){
                    cout<<"o jogador "<<"X"<<" ganhou!";
                    break;
                }
                else {
                    cout<<"o jogador "<<"O"<<" ganhou!";
                    break;
                }
                ganhou = true;
            }
        }
        for(int j =0;j<3;j++){

            if(matriz[0][j]==matriz[1][j] and matriz [1][j]==matriz[2][j] and matriz[0][j]!='*'){

                if(simbolo=='X'){
                    cout<<"o jogador "<<"X"<<" ganhou!";
                    break;
                }
                else {
                    cout<<"o jogador "<<"O"<<" ganhou!";
                    break;
                }
                ganhou = true;
            }

        }

        if(matriz[0][0]==matriz[1][1] and matriz [1][1]==matriz[2][2] and matriz [0][0] !='*'){

                if(simbolo=='X'){
                    cout<<"o jogador "<<"X"<<" ganhou!";
                    break;
                }
                else {
                    cout<<"o jogador "<<"O"<<" ganhou!";
                    break;
                }
                ganhou = true;
            }


        if(matriz[0][2]==matriz[1][1] and matriz [1][1]==matriz[2][0] and matriz[0][2]!='*'){

            if(simbolo=='X'){
                cout<<"o jogador "<<"X"<<" ganhou!";
                break;
                }
            else {
                cout<<"o jogador "<<"O"<<" ganhou!";
                break;
                }
                ganhou = true;
            }
        else{
            cout<<"Deu velha!!";
        }
        cont++;
    }









    return 0;
}
