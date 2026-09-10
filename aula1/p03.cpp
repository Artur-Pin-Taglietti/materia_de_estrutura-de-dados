#include <iostream>

#include <iomanip>

using namespace std;

int main (){
    float a,b; // declara variaveis do mesmo tipo
    cin >> a >> b; //espera o input dos dois 

    cout<<"o resultdo é "<< fixed<< setprecision(2) << a/b << endl;
    //fixed garante que esteja em ponto flutuante
    //setprecision() determina a quantidade de casas decimais
    return 0;
}
