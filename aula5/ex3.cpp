//Arrays com struct
#include <iostream>

using namespace std;

struct aluno
{
    int matricula;
    string nome;
    float nota;
};
const int na = 5 ; //número de alunos 
int main(){
    aluno turma [na] ={ 
        {9090, "João carlos", 9.7},//0
        {8080, "Ana claudia", 8.5},//1
        {7070, "Rose",8.5},        //2
        {6060, "Antonella",8.5},   //3
        {5050, "José Ildo",7.1}    //4
    }; 
    
    //exibir o vetor
    for (int i =0; i<na; i++){
        cout << "matricula " << turma[i].matricula << "\n";
        cout << "nome " << turma[i].nome << "\n";
        cout << "nota " << turma[i].nota << ",\n";
    };
    
    
    return 0;
}