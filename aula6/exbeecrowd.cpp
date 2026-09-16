
#include <algorithm>
#include <iomanip>
#include <iostream>

using namespace std;

struct olimpiadas
{
    string nome;
    int ouro;
    int prata;
    int bronze;
};
bool ordena(const olimpiadas &a, olimpiadas&b){
    return (a . ouro > b . ouro) ||
    (a . ouro == b . ouro && a . prata > b . prata)||
    (a . ouro == b . ouro && a . prata == b . prata
    && a . bronze > b . bronze )||
    (a . ouro == b . ouro && a . prata == b . prata
    && a . bronze == b . bronze && a . nome < b . nome);
}
int main() {
    int pais = 0 ;
    cin >> pais;
    olimpiadas camp[pais];    
    for(int i=0; i<pais;i++){
        cin >> camp[i].nome 
            >> camp[i].ouro >> camp[i].prata>>camp[i].bronze;
    }
    sort(camp,camp+pais,ordena);
    for(int i=0; i < pais; i ++){
    cout << camp[i].nome<<" ";
    cout << camp[i].ouro <<" ";
    cout  << camp[i].prata <<" ";
    cout<< camp[i].bronze<<endl;
    }
    return 0;
}