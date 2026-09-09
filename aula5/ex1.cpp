//preimeiro exemplo de struct

#include <iostream>

using namespace std;
struct aluno
{
    int matricula;
    string nome;
    float nota;
};

int main(){
    //declara as variaveis do tipo aluno 
    aluno ciclano, fulano;
    
    //inserir as informações
    ciclano.matricula = 909090;
    ciclano.nome = "João Carlos";
    ciclano.nota = 9.7;
    
    //exibindo as informações
    cout << "matricula " << ciclano.matricula <<endl;
    cout << "Nota " << ciclano.nota << endl;
    cout << "nome " << ciclano.nome << endl;
    
    //inserção de dados pelo terminal
    cout << "digite seu nome completo, depois a matricula e por fim a nota " << endl;
    getline(cin,fulano.nome);
    cin >> fulano.matricula;
    cin >> fulano.nota;
    
    cout << "Matricula " << fulano.matricula <<endl;
    cout << "Nota " << fulano.nota << endl;
    cout << "Nome " << fulano.nome << endl;
    
    return 0;
}