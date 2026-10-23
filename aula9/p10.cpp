#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    /*
    declaramos um ponteiro e apontamos um espaço 
    de memómria que armazenará um int.
    Neste caso a unica forma de acessar esse endereço
    é o ponteiro.
    pois não temos um nome atrelado a variavel que está
    no endereço de memoria */
    int *p= new int;//aloca
    *p = 0;
    cout << p << "|" << *p << endl;
    delete p;//desaloca
    int a =5;
    int *p1 = &a;
    int *p2 = new int;
    return 0;
}