#include <iomanip>
#include <iostream>

using namespace std;

int main(){
    float n = 1.5;
   
    float *ponteiro=&n;
    //acessando o valor tanto pela variavel quanto pelo ponteiro
    //meio direto e indireto
    cout << n << " " << *ponteiro << endl;
    *ponteiro = 9.1;
    cout << n << " " << *ponteiro << endl;
    return 0;
}