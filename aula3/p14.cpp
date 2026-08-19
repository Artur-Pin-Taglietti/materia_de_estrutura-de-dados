#include <iostream>
using namespace std;
//função void não possui retorno para quem chamou
void imprimir(string texto){
    cout << "o texto recebido foi: " << texto << endl;
}
int adiciona(int x, int y){
    int t = x + y;
    return t;
}
int main(){
    int x = 10;
    int y = 2;
    int t = 500;
    int valor = adiciona(x,y);
    cout << "Soma: "<< valor << endl;
    imprimir("ola funcão");
    return 0;
}