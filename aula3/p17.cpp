//exeplo com funções em arquivo externo.
#include <iostream>
#include "funcoes.cpp"
using namespace std;

int main(){
    int n;
    cin >> n;
    cout << "N: " << n;
    int fat = fatorial(n);
    cout << "fatorial de N: " << fat <<endl;
    return 0;
}