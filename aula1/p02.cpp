#include <iostream>

using namespace std;
int main(){
    string nome;
    cout <<"Qual seu nome? ";
    //cin >> nome; lê somente até o espaço em branco
    getline(cin,nome); //lê a linha inteira
    cout << "meu nome é: " << nome << endl;
    
    return 0;
}
