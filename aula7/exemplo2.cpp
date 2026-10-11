#include <iostream>
#include <stack> //Container para uso da estrutura de dados pilha

using namespace std;

int main(){
    stack<string> pilha; // Criamos uma pilha de string, inicialmente vazia
    stack<string> pilha_backup; // Criamos uma pilha de string, inicialmente vazia
    cout << "TAMANHO: " << pilha.size() << endl;

    pilha.push("A");
    pilha.push("B");
    pilha.push("C");

    cout << "TAMANHO: " << pilha.size() << endl;
    cout << "TOPO: " << pilha.top() << endl;

    do{
        cout << "TAMANHO: " << pilha.size() << endl;
        cout << "TOPO: " << pilha.top() << endl;
        //pilha_backup.push(pilha.top()); // Se quiser guardar os valores originais, precisa criar um backup
        pilha.pop(); //Remover o valor do top


    }while(!pilha.empty());

    cout << "TAMANHO após laço anterior: " << pilha.size() << endl;
    return 0;
}