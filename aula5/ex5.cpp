//ordenação de structs com múltiplos critérios
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
/*
    > ordem decrescente
    < ordem crescente
    1ºcritério:ordena em ordem crescente 
    2ºcritério:se as notas forem iguais, ordena em ordem cresecente de nome 
    3ºcritério: Se as notas forem iguais e os nomes forem iguais, ordena pela matricula em ordem crescente

*/
return (a.nota > b.nota) || //primeiro critério
        (a.nota == b.nota && a.nome < b.nome) ||//segundo creitério
        (a.nota == b.nota && a.nome == b.nome && a.matricula < b.matricula);//terceiro critério
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