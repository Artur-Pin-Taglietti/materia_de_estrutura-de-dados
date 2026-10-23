//exemplo de ponteiros

#include <iomanip>
#include <iostream>

using namespace std;

int main(){
    int a = 10;//varialvel do tipo int
    int *ponteiro;//ponteiro para um tipo int
    ponteiro=&a;//ponteiro recebe o endereco de memoria de a
    cout << ponteiro << endl;//sem asterisco endereço de memoria
    cout << *ponteiro << endl;//com asterisco com o conteudo contido
    a =20;
    cout << ponteiro << endl;//sem asterisco endereço de memoria
    cout << *ponteiro << endl;//com asterisco com o conteudo contido
    int b = *ponteiro/2;
    cout << b <<endl;

    return 0;
}