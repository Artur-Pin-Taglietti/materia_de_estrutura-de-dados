//exemplo de operador ternário

#include <iostream>

using namespace std;

int main(){

    double a,b;

    cout <<"informe dois valores: ";

    cin >> a >> b;
                //condição ? valor se True : valor se False
    double maior = ( a > b ? a : b);

    cout << "maior: " << maior << endl;
    
    return 0;
}