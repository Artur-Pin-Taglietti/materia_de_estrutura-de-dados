#include <iostream>
#include <algorithm>

using namespace std;

struct aluno
{
    int matricula;
    string nome;
    float nota;
};
bool ordena(const aluno &a, aluno &b){
//return a.nome <  b.nome;//ordenando por nome em ordem alfabetica(<)
//return a.nota < b.nota;//ordenando por nota 
//return a.matricula < a.matricula;//ordenando por matricula
};
const int na = 5;//alunos 
int main(){
     aluno turma [na] ={ 
        {9090, "João carlos", 9.7},//0
        {8080, "Ana claudia", 8.5},//1
        {7070, "Rose",8.5},        //2
        {6060, "Antonella",8.5},   //3
        {5050, "José Ildo",7.1}    //4
    };

    sort(turma,turma+na,ordena);

    for (int i =0; i<na; i++){
        cout << "matricula " << turma[i].matricula << "\n";
        cout << "nome " << turma[i].nome << "\n";
        cout << "nota " << turma[i].nota << ",\n";
    }; 
    return 0;
}