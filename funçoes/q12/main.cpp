#include <iostream>

using namespace std;

float aritmetica (float a ,float b ,float c){
    return (a+b+c)/3;
}


float ponderada (float a ,float b ,float c)
{
    return (a*5 + b*3 + c*2 );
}

float harmonica (float a ,float b ,float c) {
    return 3/(1/a+1/b+1/c);
}
int main()
{
    float x1,x2,x3;
    char media;

    cin >>x1>>x2>>x3;

    cin >>media;

    if (media != 'p' & media != 'a' & media != 'h'){
        return 404;
    }

    else if (media =='a'){
         cout<< aritmetica (x1,x2,x3);
         return 0;
   }
    else if (media =='p'){
         cout<< ponderada (x1,x2,x3);
         return 0;
    }
     else if (media =='h'){
         cout<< harmonica (x1,x2,x3);
         return 0;
    }
    return 0;
}
