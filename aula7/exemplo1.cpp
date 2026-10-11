//Primeiro exemplo de pilha
#include <iostream>
#include <stack> //Container para uso da estrutura de dados pilha

using namespace std;


int main(){

    stack<int> pilha;

    ///Inserção de valores;
    pilha.push(10);
    pilha.push(20);
    pilha.push(30); // Elemento mais recente (TOPO)

    cout << "Elemento do topo: " << pilha.top() << endl; // 30
    cout << "Quantidade de elementos: " << pilha.size() << endl; //Saída 3

    //Removendo valores:

    cout << "Realiza a remoção do valor do topo: " << pilha.top() << endl;
    pilha.pop(); // Remove o valor que esta no topo. Neste caso é o 30

    cout << "Elemento do topo: " << pilha.top() << endl; // 20
     cout << "Quantidade de elementos: " << pilha.size() << endl; //Saída 2

    return 0 ;
}