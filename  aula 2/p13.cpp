//como percorrer uma matriz
#include <iostream>

using namespace std;

int main(){
    const int NL=4,NC=3; //Nl quantidade de linhas /NC colunas
    float m[NL][NC]{
        //0    1    2 
        {1.5,0.4,0.1},//0
        {6.6,0.1,8.2},//1
        {3.9,1.6,5.5},//2
        {6.8,3.0,0.5}};//3
        
        //vamos precisar de dois for()
        //i para as linhas
        //j para as colunas
        
        for (int i=0; i=NL; i++){
            for (int j=0;j<NC;j++){
                cout << m[i][j]<< "\t";
            }
        }
    return 0;
}