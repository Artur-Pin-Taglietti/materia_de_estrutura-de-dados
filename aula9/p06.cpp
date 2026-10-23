#include <iomanip>
#include <iostream>

using namespace std;

int main(){
    int v[3]={10,20,30};
    //o nome do array é o endereço do seu primeiro elemento
    cout << v <<endl;
    int *p;
    p = v;
    //quando tratamos de vetor não é necessario o &
    cout<< p <<" "<<*p<<endl;
    return 0;
}