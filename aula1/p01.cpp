//exemplo de entrada e saída de dados
#include <iostream>

using namespace std;
int main(){
    int idade; 
    float altura;
    string nome; 
    cout << "informe a sua idade: "; //print 
    cin >> idade;                    //input
    cout << "informe a sua altura(m): "; //print 
    cin >> altura;                      //input
    cout << "informe a seu nome: "; //print 
    cin >> nome;                   //input

    cout<<"meu nome é: "<< nome 
        <<", eu tenho " << idade
        <<", anos e " << altura
        <<", m de altura ."<< endl;
    return 0;
}
