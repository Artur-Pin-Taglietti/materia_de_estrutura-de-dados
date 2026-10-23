//ponteiros para struct 
#include <iomanip>
#include <iostream>

using namespace std;

struct aluno{
    int matricula;
    string nome;
};
int main(){
    aluno a= {676767,"verity"};
    aluno *p = &a;
    cout << a.matricula << endl; //acesso direto
    cout << p->matricula<<endl; //acesso indireto
    /*
    a seta substitui o asterisco,
    funciona apenas no struct

    */
    p->nome= "siricutico";
    cout<< a.nome << endl;
    return 0;
}