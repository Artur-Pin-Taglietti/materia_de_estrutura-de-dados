/*
uso de filas com struct
*/
#include <queue>
#include <iostream>


using namespace std;
struct pessoa 
{
    string nome,email;
};
//leitura e inserção dos dados da fila 
int main(){
    queue<pessoa> fila;
    pessoa aux;
    while (true){
        cout<< "digite o nome ou FIM para a sair: ";
        getline(cin, aux.nome);
        if(aux.nome == "fim"){
            cout<< "voce saiu";
            break;
        }
        cout<<"digite seu email ";
        getline(cin,aux.email);
        fila.push(aux);
    }
    return 0;
}
