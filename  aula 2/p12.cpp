//arrays bidimencionais (matrizes)

#include <iostream>

using namespace std;

int main(){
    float m[3][3]{ //primeiro as linhas depois as colunas
        //0   1    2
        {1.5, 0.4,9.1},//0
        {0.6,1.4,10.2},//1
        {8.7,1.7,15.3}};//2
        cout <<"antes: "<< m[2][0] << endl; //m[linha][coluna]
        m[2][0] = m[2][0] *2;
        cout <<"depois: "<< m[2][0] << endl; 
    return 0;
}