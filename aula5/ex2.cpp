//segundo exemplo de structs -valores inseridos na declaração
#include <iostream>

using namespace std;
struct aluno
{
    int matricula;
    string nome;
    float nota;
};

int main(){
    aluno ciclano,fulano;
    ciclano = {
        909090,
        "João Carlos",
        9.7
    };
    //exibindo as informações
    cout << "matricula " << ciclano.matricula <<endl;
    cout << "Nota " << ciclano.nota << endl;
    cout << "nome " << ciclano.nome << endl;
    return 0;
}