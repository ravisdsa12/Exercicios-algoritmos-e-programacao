#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <cstring>


using namespace std;


int ramdom(int minim, int maxim)
{

    return minim+rand() %maxim+1;
}





void comidas ()
{

    char lista[10][40]= {' '};

    strcpy(lista[0], "1 Pipoca");
    strcpy(lista[1], "2 Quentao");
    strcpy(lista[2], "3 Paçoca");
    strcpy(lista[3], "4 Amendoim");
    strcpy(lista[4], "5 Caldo");
    strcpy(lista[5], "6 Canjica");
    strcpy(lista[6], "7 Milho cozido");
    strcpy(lista[7], "8 Mingau de milho");
    strcpy(lista[8], "9 cha de amendoim");
    strcpy(lista[9], "10 Licor");

    cout<<setw(6);
    for(int i =0; i<10; i++)
    {
        for (int j =0; j<40; j ++)
        {

            cout << lista[i][j];
        }
        cout<<endl<<endl;
        cout<<setw(6);
    }
}
void quantidade_pratos (int valor[],int opcao,bool&teste)
{

    switch (opcao)
    {

    case 0:
        cout<<"O prato escolhido foi pipoca!"<<endl;
        if(valor[0] >= 36)
        {
            cout<<"esse prato n pode mais ser escolhido. Escolha outro!"<<endl;
            teste=true;
            break;
        }

        valor[0]++;
        break;



    case 1:
        cout<<"O prato escolhido foi Quentao!"<<endl;
        if(valor[1] >= 17)
        {
            cout<<"esse prato n pode mais ser escolhido. Escolha outro!"<<endl;
            teste=true;
            break;
        }

        valor[1]++;
        break;

    case 2:
        cout<<"O prato escolhido foi Paçoca!"<<endl;
        if(valor[2] >= 10)
        {
            cout<<"esse prato n pode mais ser escolhido. Escolha outro!"<<endl;
            teste=true;
            break;
        }

        valor[2]++;
        break;

    case 3:
        cout<<"O prato escolhido foi Amendoim!"<<endl;
        if(valor[3] >= 35)
        {
            cout<<"esse prato n pode mais ser escolhido. Escolha outro!"<<endl;
            teste=true;
            break;
        }

        valor[3]++;
        break;

    case 4:
        cout<<"O prato escolhido foi Caldo!";
        if(valor[4] >= 50)
        {
            cout<<"esse prato n pode mais ser escolhido. Escolha outro!"<<endl;
            teste=true;
            break;
        }

        valor[4]++;
        break;

    case 5:
        cout<<"O prato escolhido foi canjica!"<<endl;
        if(valor[5] >= 10)
        {
            cout<<"esse prato n pode mais ser escolhido. Escolha outro!"<<endl;
            teste=true;
            break;
        }

        valor[5]++;
        break;

    case 6:
        cout<<"O prato escolhido foi Milho cozido!"<<endl;
        if(valor[6] >= 35)
        {
            cout<<"esse prato n pode mais ser escolhido. Escolha outro!"<<endl;
            teste=true;
            break;
        }

        valor[6]++;
        break;

    case 7:
        cout<<"O prato escolhido foi Mingau de milho!"<<endl;
        if(valor[7] >= 8)
        {
            cout<<"esse prato n pode mais ser escolhido. Escolha outro!"<<endl;
            teste=true;
            break;
        }

        valor[7]++;
        break;

    case 8:
        cout<<"O prato escolhido foi Cha de amendoim!"<<endl;
        if(valor[8] >= 30)
        {
            cout<<"esse prato n pode mais ser escolhido. Escolha outro!"<<endl;
            teste=true;
            break;
        }

        valor[8]++;
        break;

    case 9:
        cout<<"O prato escolhido foi licor!"<<endl;
        if(valor[9] >= 11)
        {
            cout<<"esse prato n pode mais ser escolhido. Escolha outro!"<<endl;
            teste=true;
            break;
        }

        valor[9]++;
        break;

    }




}
int main()
{
    char presenca='&';
    bool confirmou  = false;

    bool lista_comida=false;

    int qtt_por_prato[10]= {0};
    int numero_prato=0;
    bool prato_errado = false;

    char dados = '$';
    bool teste_dados = true;
    int valor_dado1=0;
    int valor_dado2=0;
    int valor_dado3=0;
    int soma_dados=0;

    srand(time(0));

    cout<<"vc confirma sua presença ? (s/n)"<<endl;

    cin >> presenca;

    if(presenca =='n')
    {
        cout<<"caso voce mude de ideia, reinicie o programa"<<endl;

        return 0;
    }

    else if(presenca!='s' and presenca !='n')
    {
        cout<<"caractere invalido, tente noovamente"<<endl;
    }
    else if (presenca == 's')
    {
        confirmou = true;

    }
    while (confirmou == true)
    {
        if (lista_comida == false)
        {
            cout<<setw(9)<<"lista de comidas :"<<endl;

            comidas ();
            lista_comida = true;
        }
        cout<< "qual o numero da comida que voce deseja levar?"<<endl;

        cin>>numero_prato;

        quantidade_pratos(qtt_por_prato,numero_prato - 1,prato_errado);

        if(prato_errado == true)
        {
            continue;
        }

        cout<<"voce deseja jogar dados? (s/n)"<<endl;
        cin>> dados;

        while(teste_dados)
        {

            if(dados == 's' or dados=='n')
            {
                break;
            }
            else
            {
                cout<<"simbolo invalido , tente novamente!"<<endl;
            }

        }

        if(dados =='s')
        {
            cout<<"serão lançados 3 dados , se a soma do valor dos dados for maior ou igual a 15 voce ganha um brinde!!"<<endl;
            valor_dado1 = ramdom (1,6);
            cout<< valor_dado1<<endl;
            valor_dado2 = ramdom (1,6);
            cout<< valor_dado2<<endl;
            valor_dado3 = ramdom (1,6);
            cout<< valor_dado3<<endl;
            soma_dados = valor_dado1 + valor_dado2+valor_dado3;

            if (soma_dados>=15)
            {
                cout<< "parabens! voce ganhou o brinde!"<<endl;
            }
            else
            {
                cout<< "pocha, que azar!! voce nao ganhou o brinde!"<<endl;
            }
        }
        confirmou=false;
    }
// pra descidir o valor das partes pra vaquinha e a quantidade de participantes, será usado valores aleatorios//
    int quantidade_pessoas=ramdom(1,242);
    int valor_vaquinha = 0;

    if (quantidade_pessoas<=20){
        valor_vaquinha = 200;
    }

    else if (quantidade_pessoas<=80 and quantidade_pessoas>20 ){
        valor_vaquinha = 400;
    }
    else if (quantidade_pessoas<=150 and quantidade_pessoas>80  ){
        valor_vaquinha = 600;
    }
     else if (quantidade_pessoas<=242 and quantidade_pessoas>150 ){
        valor_vaquinha = 1000;
    }

    int valor_arrecadado = ramdom (0,2000);

    if(valor_arrecadado == valor_vaquinha){
        cout<<"tudo ok"<<endl;
    }
    else if (valor_arrecadado<valor_vaquinha){
        cout<<"tivemos prejuizo de"<<valor_vaquinha - valor_arrecadado<<endl;
    }
    else if (valor_arrecadado>valor_vaquinha){
        cout<<"tivemos lucro de"<<setw(5)<<valor_arrecadado - valor_vaquinha<<"R$"<<endl;
    }




    return 0;
}
