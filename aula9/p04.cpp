//exemplo de ponteiro de ponteiros 
#include <iomanip>
#include <iostream>

using namespace std;

int main(){
    int a = 10;
    int *p=&a;
    int **pp;
    pp =&p;
    cout << pp //endereco de memoria do ponteiro p
    << " "<< *pp //endereco de memoria da variavel a 
    << " "<< **pp //valor contido na variavel a
    << &pp //endereco de memoria de pp
    <<endl;
    return 0;
}